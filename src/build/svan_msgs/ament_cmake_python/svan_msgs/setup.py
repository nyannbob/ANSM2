from setuptools import find_packages
from setuptools import setup

setup(
    name='svan_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('svan_msgs', 'svan_msgs.*')),
)
