Here's the README:


# Teleop Keyboard for Franka Panda Robot

This ROS2-based Python script allows you to control the Franka Panda robot's movement using the keyboard. The robot's end-effector moves continuously in a Cartesian space along the X, Y, or Z axes based on key presses. Additionally, you can control the robot's gripper with specific key presses. The script uses `pynput` for keyboard input and ROS2 actions to send movement commands to the robot.

## Features

- **Continuous movement**: As long as a key is pressed, the robot will continuously move in the respective direction.
- **Speed control**: You can increase or decrease the speed of the movement using dedicated keys.
- **Gripper control**: The robot's gripper can be opened or closed using specific keys.
- **Reset movement**: If no keys are pressed, the robot stops its movement and resets its position.
- **ROS2 integration**: The robot’s movement is controlled through ROS2 actions, specifically the `/MoveL` action for Cartesian motion.

## Key Bindings

| Key  | Action                         |
|------|--------------------------------|
| `q`  | Move in +X direction (forward) |
| `a`  | Move in -X direction (backward)|
| `w`  | Move in +Y direction (up)      |
| `s`  | Move in -Y direction (down)    |
| `e`  | Move in +Z direction (up)      |
| `d`  | Move in -Z direction (down)    |
| `r`  | Increase speed                 |
| `f`  | Decrease speed                 |
| `y`  | Open gripper                   |
| `h`  | Close gripper                  |
| `Esc`| Stop the script and exit       |

## Requirements

- ROS 2 Humble
- `pynput` library
- ROS2 action server `/MoveL` for Cartesian motion
- ROS2 gripper control (can be implemented based on your robot's configuration)

## Installation

### 1. Install dependencies

Make sure you have ROS2 Humble and Python installed. Then, install the necessary Python dependencies using `pip`:

```bash
pip install pynput
```

### 2. Set up ROS2 workspace

Make sure your ROS2 workspace is properly set up and sourced.

```bash
source /opt/ros/humble/setup.bash
```

### 3. Build your workspace

After cloning, build the workspace:

```bash
cd ~/your_ros2_workspace
colcon build
source install/setup.bash
```

### 4. Launch the Robot Interface

To launch the Franka Panda robot and its interface, use the following ROS2 launch command:

```bash
ros2 launch panda_ros2_moveit2 panda_interface.launch.py
```

This will launch the necessary nodes to interface with the robot.

### 5. Run the Teleop Keyboard Script

Run the teleoperation script:

```bash
python3 ~/your_ros2_workspace/src/teleop_keyboard/teleop_keyboard.py
```

### 6. Control the Robot

Once the script is running, use the keys specified above to move the robot and control the gripper. The robot will execute the movement commands continuously while the key is held down.

- Press `y` to open the gripper.
- Press `h` to close the gripper.

## Notes

- Ensure that the robot's `/MoveL` action server is running and accessible via ROS2.
- The gripper control should be implemented via ROS2 topics or actions, depending on your robot's configuration. You may need to adjust the gripper control logic in the script to match your setup.
- Adjust the increment/decrement values (`0.1`) and speed control (`0.1` per key press) to suit your application needs.
- You can customize the key bindings and movement parameters in the script if needed.

## Troubleshooting

- **Robot not moving**: Make sure the ROS2 action server for `/MoveL` is running and the robot is in a ready state or kill the terminal and run the python code file for the kyeboard control.
- **Gripper control not working**: Ensure that your gripper is correctly set up and mapped to the relevant ROS2 actions or topics.
- **Keyboard input issues**: Ensure that the `pynput` library is installed correctly, and check for any permission issues related to reading from the keyboard.
 
## License

The above simulation of the Franka robot has been based on IFRA (Intelligent Flexible Robotics and Assembly) Group, CRANFIELD UNIVERSITY. Heavily relies on the above repository for errors and issues.
