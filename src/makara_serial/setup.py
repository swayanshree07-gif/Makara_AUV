from setuptools import find_packages, setup

package_name = 'makara_serial'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Yamin',
    maintainer_email='alyaminbinharis@gmail.com',
    description='Makara AUV Serial Node ROS 2 Port',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'makara_serial_node = makara_serial.makara_serial_node:main'
        ],
    },
)
