import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, SetEnvironmentVariable, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import xacro

def launch_setup(context, *args, **kwargs):
    pkg_auv_description = get_package_share_directory('auv_description')
    pkg_bluerov2_description = get_package_share_directory('bluerov2_description')
    pkg_ros_gz_sim = get_package_share_directory('ros_gz_sim')

    headless = LaunchConfiguration('headless').perform(context)
    
    gz_args = '-r '
    if headless.lower() == 'true':
        gz_args = '-s -r '
    
    gz_args += os.path.join(pkg_auv_description, 'worlds', 'pool.world')

    xacro_file = os.path.join(pkg_bluerov2_description, 'robots', 'bluerov2_default.xacro')
    robot_desc = xacro.process_file(xacro_file, mappings={'namespace': 'bluerov2'}).toxml()

    bridge_args = [
        '/imu/data@sensor_msgs/msg/Imu[ignition.msgs.IMU',
        '/model/bluerov2/odometry@nav_msgs/msg/Odometry[ignition.msgs.Odometry',
        '/clock@rosgraph_msgs/msg/Clock[ignition.msgs.Clock',
        '/world/sauvc_pool_world/pose/info@tf2_msgs/msg/TFMessage[ignition.msgs.Pose_V',
    ]
    for i in range(1, 9):
        bridge_args.append(
            f'/model/bluerov2/joint/thruster{i}_joint/cmd_thrust'
            f'@std_msgs/msg/Float64]ignition.msgs.Double'
        )

    return [
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_ros_gz_sim, 'launch', 'gz_sim.launch.py')
            ),
            launch_arguments={
                'gz_args': gz_args
            }.items(),
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': robot_desc}],
            prefix='gnome-terminal -- bash -c "ros2 run robot_state_publisher robot_state_publisher --ros-args -p robot_description:=\'{}\' ; exec bash"'.format(robot_desc.replace('"', '\\"'))
        ),
        Node(
            package='ros_gz_sim',
            executable='create',
            arguments=[
                '-topic', 'robot_description',
                '-name', 'bluerov2'
            ],
            output='screen',
            prefix='gnome-terminal -- bash -c "ros2 run ros_gz_sim create -topic robot_description -name bluerov2 ; exec bash"'
        ),
        Node(
            package='ros_gz_bridge',
            executable='parameter_bridge',
            arguments=bridge_args,
            output='screen',
            prefix='gnome-terminal -- bash -c "ros2 run ros_gz_bridge parameter_bridge {}; exec bash"'.format(' '.join(bridge_args))
        ),
        # Sim bridge (specific to Gazebo simulation driver)
        Node(
            package='auv_description',
            executable='sim_bridge.py',
            name='sim_bridge',
            prefix='gnome-terminal -- bash -c "ros2 run auv_description sim_bridge.py; exec bash"'
        ),

        Node(
            package='auv_description',
            executable='thruster_mixer.py',
            name='thruster_mixer',
            prefix='gnome-terminal -- bash -c "ros2 run auv_description thruster_mixer.py; exec bash"'
        ),

        Node(
            package='auv_description',
            executable='pid_publisher.py',
            name='pid_publisher',
            prefix='gnome-terminal -- bash -c "ros2 run auv_description pid_publisher.py; exec bash"'
        ),

        Node(
            package='auv_description',
            executable='setpoint_publisher.py',
            name='setpoint_publisher',
            prefix='gnome-terminal -- bash -c "ros2 run auv_description setpoint_publisher.py; exec bash"'
        ),

        Node(
            package='auv_description',
            executable='makara_gui.py',
            name='makara_gui',
            prefix='gnome-terminal -- bash -c "ros2 run auv_description makara_gui.py; exec bash"'
        ),
    ]


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('headless', default_value='false', description='Run simulation in headless mode (no GUI)'),
        
        # Force local discovery and software rendering for Docker stability
        SetEnvironmentVariable('IGN_IP', '127.0.0.1'),
        SetEnvironmentVariable('IGN_PARTITION', 'makara'),
        SetEnvironmentVariable('LIBGL_ALWAYS_SOFTWARE', '1'),

        OpaqueFunction(function=launch_setup)
    ])
