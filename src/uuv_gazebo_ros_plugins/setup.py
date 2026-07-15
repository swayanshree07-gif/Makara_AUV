from setuptools import setup
import os
from glob import glob

package_name = 'uuv_gazebo_ros_plugins'

setup(
    name=package_name,
    version='0.0.0',
    packages=[],
    data_files=[
        # REQUIRED
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),


        (os.path.join('share', package_name, 'urdf'),
            glob('urdf/*')),


    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='swayanshree',
    maintainer_email='swayanshree07@gmail.com',
    description='UUV Gazebo ROS plugins resources (ROS2 placeholder)',
    license='TODO',
    entry_points={},
)
