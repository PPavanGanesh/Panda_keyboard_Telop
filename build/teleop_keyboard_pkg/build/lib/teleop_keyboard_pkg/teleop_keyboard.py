import rclpy
from rclpy.node import Node
from pynput import keyboard
import subprocess
import time
import threading

class TeleopKeyboard(Node):
    def __init__(self):
        super().__init__('teleop_keyboard')

        # Define initial position increments
        self.move_x = 0.0
        self.move_y = 0.0
        self.move_z = 0.0
        self.speed = 1.0  # Speed factor

        self.key_pressed = False  # Flag to check if a key is pressed
        self.lock = threading.Lock()  # Lock to handle concurrency issues
        self.last_keypress_time = time.time()

    def on_press(self, key):
        """Called when a key is pressed."""
        try:
            with self.lock:
                if time.time() - self.last_keypress_time < 0.2:  # Ignore keypress if within 200ms
                    return

                self.last_keypress_time = time.time()

                if key.char == 'q':  # Move in +x direction
                    self.move_x += 0.1
                elif key.char == 'a':  # Move in -x direction
                    self.move_x -= 0.1
                elif key.char == 'w':  # Move in +y direction
                    self.move_y += 0.1
                elif key.char == 's':  # Move in -y direction
                    self.move_y -= 0.1
                elif key.char == 'e':  # Move in +z direction
                    self.move_z += 0.1
                elif key.char == 'd':  # Move in -z direction
                    self.move_z -= 0.1
                elif key.char == 'r':  # Increase speed
                    self.speed += 0.1
                elif key.char == 'f':  # Decrease speed
                    self.speed -= 0.1
                elif key.char == 'y':  # Open gripper
                    self.send_gripper_command(open_gripper=True)
                elif key.char == 'h':  # Close gripper
                    self.send_gripper_command(open_gripper=False)

                # Set the key pressed flag to True
                self.key_pressed = True

                # Send MoveL action command to robot
                self.send_moveL_command()
        except AttributeError:
            pass

    def on_release(self, key):
        """Called when a key is released."""
        if key == keyboard.Key.esc:
            return False  # Stop listener when 'Esc' is pressed

        with self.lock:
            self.key_pressed = False  # Reset flag when key is released

    def send_moveL_command(self):
        """Send MoveL action to the robot."""
        move_command = f"ros2 action send_goal -f /MoveL ros2_data/action/MoveL \"{{movex: {self.move_x}, movey: {self.move_y}, movez: {self.move_z}, speed: {self.speed}}}\""
        threading.Thread(target=self.execute_command, args=(move_command,)).start()

    def send_gripper_command(self, open_gripper):
        """Send MoveG action to open/close the gripper."""
        gripper_goal = 0.04 if open_gripper else 0.03  # Open gripper = 0.04, Close gripper = 0.0
        gripper_command = f"ros2 action send_goal -f /MoveG ros2_data/action/MoveG \"{{goal: {gripper_goal}}}\""
        threading.Thread(target=self.execute_command, args=(gripper_command,)).start()

    def execute_command(self, command):
        """Execute a shell command in a non-blocking way."""
        try:
            subprocess.Popen(command, shell=True)
            self.get_logger().info(f"Executed command: {command}")
        except Exception as e:
            self.get_logger().error(f"Failed to execute command: {e}")

    def reset_values_if_no_key_pressed(self):
        """Reset the movement values to 0 if no key is pressed."""
        with self.lock:
            if not self.key_pressed:
                self.move_x = 0.0
                self.move_y = 0.0
                self.move_z = 0.0

    def run(self):
        """Run the node to continuously update movement and reset values if no key is pressed."""
        try:
            while rclpy.ok():
                self.reset_values_if_no_key_pressed()
                time.sleep(0.1)  # Brief sleep to reduce CPU usage
        except KeyboardInterrupt:
            self.get_logger().info("Keyboard teleop interrupted.")


def main(args=None):
    rclpy.init(args=args)
    teleop = TeleopKeyboard()

    listener = keyboard.Listener(on_press=teleop.on_press, on_release=teleop.on_release)
    listener.start()

    teleop.run()

    rclpy.shutdown()


if __name__ == '__main__':
    main()

