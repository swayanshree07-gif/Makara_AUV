from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'uuv_descriptions'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),


        (os.path.join('share', package_name, 'urdf'), glob('urdf/*.xacro')),
        
        
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='swayanshree',
    maintainer_email='swayanshree07@gmail.com',
    description='UUV description files',
    license='TODO',
    extras_require={
        'test': ['pytest'],
    },
    entry_points={
        'console_scripts': [],
    },
)
