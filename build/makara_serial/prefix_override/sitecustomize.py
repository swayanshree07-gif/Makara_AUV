import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/swayanshree/projects/Makara-AUV-ROS2/install/makara_serial'
