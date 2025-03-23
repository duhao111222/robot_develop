from setuptools import find_packages
from setuptools import setup

setup(
    name='status_insterfaces',
    version='0.0.0',
    packages=find_packages(
        include=('status_insterfaces', 'status_insterfaces.*')),
)
