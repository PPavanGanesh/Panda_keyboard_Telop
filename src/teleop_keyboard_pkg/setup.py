from setuptools import setup

setup(
    name='teleop_keyboard_pkg',
    version='0.1.0',
    packages=['teleop_keyboard_pkg'],
    install_requires=['setuptools', 'rospy', 'geometry_msgs'],
    entry_points={
        'console_scripts': [
            'teleop_keyboard = teleop_keyboard_pkg.teleop_keyboard:teleop',  # Points to teleop function
        ],
    },
)

