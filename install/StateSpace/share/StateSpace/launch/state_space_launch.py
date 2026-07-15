#!/usr/bin/env python3
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch.conditions import IfCondition
from launch_ros.actions import Node

def generate_launch_description():
    filter_type = LaunchConfiguration("filter_type")

    return LaunchDescription([
        DeclareLaunchArgument(
            "filter_type",
            default_value="complementary",
            description="Type of filter to use: complementary or ekf"
        ),

        Node(
            package="StateSpace",
            executable="complementary_filter.py",
            name="complementary_filter_node",
            output="screen",
            condition=IfCondition(PythonExpression(["\"", filter_type, "\" == \"complementary\""]))
        ),

        Node(
            package="StateSpace",
            executable="ekf_node.py",
            name="ekf_node",
            output="screen",
            condition=IfCondition(PythonExpression(["\"", filter_type, "\" == \"ekf\""]))
        ),
        
        Node(
            package="StateSpace",
            executable="dummy_sensor_publisher.py",
            name="dummy_sensor_publisher",
            output="screen",
        )
    ])
