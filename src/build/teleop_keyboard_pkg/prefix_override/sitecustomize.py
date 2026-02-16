import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/manideep/FrankaSimulator_Ws/src/install/teleop_keyboard_pkg'
