from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():        

    webcam_pub = Node(
        package = "aruco_tracker", 
        executable = "webcam_pub"
    )
    
    webcam_sub = Node(
        package = "aruco_tracker", 
        executable = "webcam_sub"
    )

    return LaunchDescription([
        webcam_pub,
        webcam_sub,
    ])
