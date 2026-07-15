from setuptools import find_packages
from setuptools import setup

setup(
    name='makara_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('makara_interfaces', 'makara_interfaces.*')),
)
