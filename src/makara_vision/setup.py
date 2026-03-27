from setuptools import setup
import os
from glob import glob

package_name = 'makara_vision'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='alyaminbinharis@gmail.com',
    description='Makara AUV Vision Package with YOLO and NPU support',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'detector_node = makara_vision.detector_node:main'
        ],
    },
)
