from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_data',
    version='0.0.0',
    packages=find_packages(
        include=('ros2_data', 'ros2_data.*')),
)
