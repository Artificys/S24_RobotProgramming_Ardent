from aruco_interfaces.msg import ArucoLocation
from aruco_interfaces.srv import RobotCommand

import rclpy
from rclpy.node import Node


class ControlService(Node):

    def __init__(self):
        super().__init__('control_server')
        
        # Control Server/Cli
        self.control_srv = self.create_service(RobotCommand, 'robot_command', self.control_callback)
            
        # Aruco Tracker Subscription
        self.aruco_sub = self.create_subscription(ArucoLocation, 'aruco_location', self.aruco_callback, 10)
        
        self.aruco_pose_x = 0
        self.aruco_pose_y = 0
        self.aruco_pose_theta = 0
        
        self.aruco_id = 0
        self.aruco_found = False
        
    def aruco_callback(self, msg):

        self.aruco_pose_x = msg.aruco_pose.position.z
        self.aruco_pose_y = msg.aruco_pose.position.x
        self.aruco_pose_theta = msg.aruco_pose.orientation.y
        
        self.aruco_id = msg.aruco_id
        self.aruco_found = msg.aruco_found
        

    def control_callback(self, request, response):     
    
        # Target Pose Between Robot and ArUco Markers
        target_pose_x = request.target_pose.x
        target_pose_y = request.target_pose.y
        target_pose_theta = request.target_pose.theta
        
        
        error_pose_x = target_pose_x - self.aruco_pose_x
        error_pose_y = target_pose_y - self.aruco_pose_y
        error_pose_theta = target_pose_theta - self.aruco_pose_theta
        
        self.get_logger().info(f'Measured Error: x:{error_pose_x}, y:{error_pose_y}, theta:{error_pose_theta}')		
    
        response.success = True

        return response


def main(args=None):
    rclpy.init(args=args)

    control_service = ControlService()

    rclpy.spin(control_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
