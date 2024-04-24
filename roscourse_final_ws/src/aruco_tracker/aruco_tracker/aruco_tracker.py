import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image
from sensor_msgs.msg import CameraInfo
from aruco_interfaces.srv import ArucoLocation

import cv2
from cv_bridge import CvBridge
from cv_bridge.core import CvBridgeError

import numpy as np
import sys
import time
import math

def imgmsg_to_cv2(img_msg):
    if img_msg.encoding != "bgr8":
        rospy.logerr("This Coral detect node has been hardcoded to the 'bgr8' encoding.  Come change the code if you're actually trying to implement a new camera")
    
    dtype = np.dtype("uint8") # Hardcode to 8 bits
    dtype = dtype.newbyteorder('>' if img_msg.is_bigendian else '<')
    image_opencv = np.ndarray(shape=(img_msg.height, img_msg.width, 3), # and three channels of data. Since OpenCV works with bgr natively, we don't need to reorder the channels.
                    dtype=dtype, buffer=img_msg.data)

    # If the byt order is different between the message and the system.
    if img_msg.is_bigendian == (sys.byteorder == 'little'):
        image_opencv = image_opencv.byteswap().newbyteorder()

    return image_opencv


def quat_from_rpy(roll, pitch, yaw):

    cy = math.cos(yaw*0.5)
    sy = math.sin(yaw*0.5)
    cp = math.cos(pitch*0.5)
    sp = math.sin(pitch*0.5)
    cr = math.cos(roll*0.5)
    sr = math.sin(roll*0.5)

    qw = cr * cp * cy + sr * sp * sy
    qx = sr * cp * cy - cr * sp * sy
    qy = cr * sp * cy + sr * cp * sy
    qz = cr * cp * sy - sr * sp * cy

    return qx, qy, qz, qw


class ArucoTracker(Node):

    def __init__(self):
        super().__init__('arucoTracker')

        self.bridge = CvBridge()

        self.img_subscription = self.create_subscription(Image, 'image_raw', self.img_callback, 1)
        
        self.mtx_subscription = self.create_subscription(CameraInfo, 'camera_info', self.matrix_callback, 1)
        
        self.arucoTracker = self.create_service(ArucoLocation, 'aruco_location', self.aruco_callback)
        
        self.frame = None
        
        self.cameraMatrix = np.array([ [705.917809, 0.000000, 331.476932], 
                                       [0.000000, 655.919479, 227.721680],
                                       [0.000000, 0.000000, 1.000000] ]) 
        
    # Read Images from camera
    def img_callback(self, img_msg):

        try:
            self.frame = self.bridge.imgmsg_to_cv2(img_msg, 'bgr8')

        except CvBridgeError as e:
            self.get_logger().info(e)
        
        # show image
        cv2.namedWindow("Image")
        if self.frame is not None:
            cv2.imshow("Image", self.frame)
        cv2.waitKey(1)
        
    # Find Intrinsic Matrix of Camera
    def matrix_callback(self, camera_msg):
    	self.cameraMatrix = camera_msg.k
        
    # Respond to Aruco Tracker Service Request
    def aruco_callback(self, request, responce):
    
        if self.frame is None:
            self.get_logger().info('Warning: No image detected')
            responce.aruco_found = False
        else:                                      
            markerSize = 0.050
                                      
            arucoDict = cv2.aruco.Dictionary_get(cv2.aruco.DICT_4X4_1000)
            arucoParams = cv2.aruco.DetectorParameters_create()
            
            (corners, IDs, rejected) = cv2.aruco.detectMarkers(self.frame, arucoDict, parameters=arucoParams)
            
            if len(corners) > 0:
                ID = np.min(IDs)
                points3D = markerSize/2 * np.array([ [-1, -1, 0], [1, -1, 0], [1, 1, 0], [-1, 1, 0],  ])
                
                ret, rvec, tvec = cv2.solvePnP(points3D, corners[np.argmin(IDs)], self.cameraMatrix, None)
                
                responce.aruco_pose.position.x = float(tvec[0])
                responce.aruco_pose.position.y = float(tvec[1])
                responce.aruco_pose.position.z = float(tvec[2])
                
                
                qx, qy, qz, qw = quat_from_rpy(rvec[0], rvec[1], rvec[2])
                responce.aruco_pose.orientation.x = qx
                responce.aruco_pose.orientation.y = qy
                responce.aruco_pose.orientation.z = qz
                responce.aruco_pose.orientation.w = qw
                
                responce.aruco_id = int(ID)
                
                responce.aruco_found = True
                
            else:
                responce.aruco_found = False
              
        return responce
            

def main(args=None):

    rclpy.init(args=args)

    arucoTracker = ArucoTracker()
    
    rclpy.spin(arucoTracker)

    arucoTracker.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

