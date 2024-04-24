from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():        

    webcam_pub = Node(
        package= "aruco_tracker", 
        executable = "webcam_pub"
    )
    
    webcam_sub = Node(
        package= "aruco_tracker", 
        executable = "webcam_sub"
    )
    
    aruco_tracker = Node(
        package= "aruco_tracker", 
        executable = "aruco_tracker"
    )
    
    aruco_publisher = Node(
        package= "aruco_tracker", 
        executable = "aruco_publisher"
    )
    
    core_node = Node(
        package= "aruco_tracker", 
        executable = "core_node"
    )
    
    control_server = Node(
        package = "aruco_tracker",
        executable = "control_server"    
    )

    return LaunchDescription([
        webcam_pub,
        aruco_publisher,
        core_node,
        control_server
    ])
