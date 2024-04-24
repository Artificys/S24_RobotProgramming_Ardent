from setuptools import setup
import os
from glob import glob

package_name = 'aruco_tracker'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='scott',
    maintainer_email='skawofford@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'webcam_pub = aruco_tracker.cam_pub:main',
        'webcam_sub = aruco_tracker.cam_sub:main',
        'aruco_publisher = aruco_tracker.aruco_publisher:main',
        'core_node = aruco_tracker.core_node:main',
        'control_server = aruco_tracker.control_server:main'
        ],
    },
)
