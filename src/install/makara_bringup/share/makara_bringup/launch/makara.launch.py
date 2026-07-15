import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 1. Your Makara Controller (C++)
        Node(
            package="makara_control",
            executable="makara_control_node",
            name="makara_control_node",
            output="screen"
        ),
        # 2. Your Makara Sync Node (Python - Maps IMU to /combined)
#       Node(
#           package="data_sync",
#           executable="stability_sync_node",
#           name="stability_sync_node",
#           output="screen"
#       ),
        # 3. New Bridge: PWM to Force for BlueROV2
#       Node(
#           package="data_sync",
#           executable="makara_to_bluerov2",
#           name="makara_to_bluerov2_bridge",
#           output="screen"
#       )
    ])
