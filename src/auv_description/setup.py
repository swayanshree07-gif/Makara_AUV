from setuptools import setup

package_name = 'auv_description'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='your_name',
    description='AUV description package',
    entry_points={
        'console_scripts': [
            'thruster_mixer = auv_description.thruster_mixer:main',
            'pid_publisher = auv_description.pid_publisher:main',
            'setpoint_publisher = auv_description.setpoint_publisher:main',
            'sim_bridge = auv_description.sim_bridge:main',
            'sim_bridge = auv_description.makara_gui:main',
        ],
    },
)
