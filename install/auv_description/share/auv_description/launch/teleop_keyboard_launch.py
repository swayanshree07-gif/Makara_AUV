from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='teleop_twist_keyboard',
            executable='teleop_twist_keyboard',
            name='teleop_keyboard',
            output='screen',
            prefix='xterm -e', # This will open a new terminal if X11 is available, but for CLI let's try without prefix first or use instructions.
            parameters=[{
                'speed': 0.5,
                'turn': 0.5,
            }],
            # Keyboard teleop is highly interactive and needs a dedicated terminal.
            # We provide this for documentation but usually it's run via 'ros2 run'.
        ),
    ])
