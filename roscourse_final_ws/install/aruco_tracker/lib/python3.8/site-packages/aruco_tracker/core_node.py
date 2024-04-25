from aruco_interfaces.msg import ArucoLocation
from aruco_interfaces.srv import RobotCommand

from geometry_msgs.msg import Pose
    
import rclpy
from rclpy.node import Node


class CoreNode(Node):

    def __init__(self):
        super().__init__('core_node')
        
        self.aruco_pose2D_x = 0
        self.aruco_pose2D_y = 0
        self.aruco_pose2D_theta = 0

        self.aruco_id = 0
        self.aruco_found = False

        # Aruco Tracker Subscription
        self.aruco_sub = self.create_subscription(ArucoLocation, 'aruco_location', self.aruco_callback, 10)        

        # Control System Server/Cli
        self.control_cli = self.create_client(RobotCommand, 'robot_command')
        while not self.control_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('control service not available, waiting again...')
        self.control_req = RobotCommand.Request()
           

    def aruco_callback(self, msg):
        self.aruco_pose2D_x = msg.aruco_pose.position.z
        self.aruco_pose2D_y = msg.aruco_pose.position.x
        self.aruco_pose2D_theta = msg.aruco_pose.orientation.y
        
        self.aruco_id = msg.aruco_id
        self.aruco_found = msg.aruco_found


    def update(self):       

        if self.aruco_found:
                        
            self.get_logger().info(f'x:{self.aruco_pose2D_x}, y:{self.aruco_pose2D_y}, a:{self.aruco_pose2D_theta}') 
            if self.aruco_id == 0:
                self.control_req.target_pose.x = 1.0
                self.control_req.target_pose.y = 0.0
                self.control_req.target_pose.theta = 0.0
                
            self.control_future = self.control_cli.call_async(self.control_req)
            rclpy.spin_until_future_complete(self, self.control_future, timeout_sec=1.0)
            command_complete = self.control_future.result().success
            
            #self.get_logger().info(f'{command_complete = }')
            


def main(args=None):
  
    rclpy.init(args=args)

    core_node = CoreNode()
    
    while rclpy.ok():
        
        core_node.update()
        rclpy.spin_once(core_node)

    core_node.destroy_node()
    rclpy.shutdown()
    
    
    
    
    
    


if __name__ == '__main__':
    main()
