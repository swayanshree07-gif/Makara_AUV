from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 1. makara_control PID controller
        Node(
            package='makara_control',
            executable='makara_control_node',
            name='makara_attitude_controller',
            output='screen'
        ),
        # 2. Setpoint publisher (publishes depth=1.5, roll=0, pitch=0)
        Node(
            package='auv_description',
            executable='setpoint_publisher.py',
            name='setpoint_publisher',
            output='screen'
        ),
        # 3. PID publisher (publishes gains)
        Node(
            package='auv_description',
            executable='pid_publisher.py',
            name='pid_publisher',
            output='screen'
        ),
    ])
