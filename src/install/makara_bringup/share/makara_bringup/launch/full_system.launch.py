from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    makara = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('makara_bringup'),
                'launch',
                'makara.launch.py'
            )
        )
    )

    control = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('makara_control'),
                'launch',
                'makara_control_launch.py'
            )
        )
    )

    state_space = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('StateSpace'),
                'launch',
                'state_space_launch.py'
            )
        )
    )

    return LaunchDescription([
        makara,
        control,
        state_space
    ])
