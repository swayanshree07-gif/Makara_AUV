# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hammerhead_interfaces:msg/MoveCmd.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveCmd(type):
    """Metaclass of message 'MoveCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hammerhead_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hammerhead_interfaces.msg.MoveCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__move_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__move_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__move_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__move_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__move_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveCmd(metaclass=Metaclass_MoveCmd):
    """Message class 'MoveCmd'."""

    __slots__ = [
        '_surge',
        '_surge_speed',
        '_surge_time',
        '_is_surge',
        '_sway',
        '_sway_speed',
        '_sway_time',
        '_is_sway',
        '_yaw',
        '_yaw_speed',
        '_yaw_time',
        '_is_yaw',
        '_depth',
        '_depth_speed',
        '_depth_time',
        '_is_depth',
        '_is_absolute',
        '_wait_for_max_timer_to_timeout',
        '_mode_after_last_cmd',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'surge': 'float',
        'surge_speed': 'float',
        'surge_time': 'float',
        'is_surge': 'int8',
        'sway': 'float',
        'sway_speed': 'float',
        'sway_time': 'float',
        'is_sway': 'int8',
        'yaw': 'float',
        'yaw_speed': 'float',
        'yaw_time': 'float',
        'is_yaw': 'int8',
        'depth': 'float',
        'depth_speed': 'float',
        'depth_time': 'float',
        'is_depth': 'int8',
        'is_absolute': 'int8',
        'wait_for_max_timer_to_timeout': 'int8',
        'mode_after_last_cmd': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.surge = kwargs.get('surge', float())
        self.surge_speed = kwargs.get('surge_speed', float())
        self.surge_time = kwargs.get('surge_time', float())
        self.is_surge = kwargs.get('is_surge', int())
        self.sway = kwargs.get('sway', float())
        self.sway_speed = kwargs.get('sway_speed', float())
        self.sway_time = kwargs.get('sway_time', float())
        self.is_sway = kwargs.get('is_sway', int())
        self.yaw = kwargs.get('yaw', float())
        self.yaw_speed = kwargs.get('yaw_speed', float())
        self.yaw_time = kwargs.get('yaw_time', float())
        self.is_yaw = kwargs.get('is_yaw', int())
        self.depth = kwargs.get('depth', float())
        self.depth_speed = kwargs.get('depth_speed', float())
        self.depth_time = kwargs.get('depth_time', float())
        self.is_depth = kwargs.get('is_depth', int())
        self.is_absolute = kwargs.get('is_absolute', int())
        self.wait_for_max_timer_to_timeout = kwargs.get('wait_for_max_timer_to_timeout', int())
        self.mode_after_last_cmd = kwargs.get('mode_after_last_cmd', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.surge != other.surge:
            return False
        if self.surge_speed != other.surge_speed:
            return False
        if self.surge_time != other.surge_time:
            return False
        if self.is_surge != other.is_surge:
            return False
        if self.sway != other.sway:
            return False
        if self.sway_speed != other.sway_speed:
            return False
        if self.sway_time != other.sway_time:
            return False
        if self.is_sway != other.is_sway:
            return False
        if self.yaw != other.yaw:
            return False
        if self.yaw_speed != other.yaw_speed:
            return False
        if self.yaw_time != other.yaw_time:
            return False
        if self.is_yaw != other.is_yaw:
            return False
        if self.depth != other.depth:
            return False
        if self.depth_speed != other.depth_speed:
            return False
        if self.depth_time != other.depth_time:
            return False
        if self.is_depth != other.is_depth:
            return False
        if self.is_absolute != other.is_absolute:
            return False
        if self.wait_for_max_timer_to_timeout != other.wait_for_max_timer_to_timeout:
            return False
        if self.mode_after_last_cmd != other.mode_after_last_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def surge(self):
        """Message field 'surge'."""
        return self._surge

    @surge.setter
    def surge(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'surge' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'surge' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._surge = value

    @builtins.property
    def surge_speed(self):
        """Message field 'surge_speed'."""
        return self._surge_speed

    @surge_speed.setter
    def surge_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'surge_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'surge_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._surge_speed = value

    @builtins.property
    def surge_time(self):
        """Message field 'surge_time'."""
        return self._surge_time

    @surge_time.setter
    def surge_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'surge_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'surge_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._surge_time = value

    @builtins.property
    def is_surge(self):
        """Message field 'is_surge'."""
        return self._is_surge

    @is_surge.setter
    def is_surge(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_surge' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'is_surge' field must be an integer in [-128, 127]"
        self._is_surge = value

    @builtins.property
    def sway(self):
        """Message field 'sway'."""
        return self._sway

    @sway.setter
    def sway(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sway' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sway' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sway = value

    @builtins.property
    def sway_speed(self):
        """Message field 'sway_speed'."""
        return self._sway_speed

    @sway_speed.setter
    def sway_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sway_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sway_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sway_speed = value

    @builtins.property
    def sway_time(self):
        """Message field 'sway_time'."""
        return self._sway_time

    @sway_time.setter
    def sway_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sway_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sway_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sway_time = value

    @builtins.property
    def is_sway(self):
        """Message field 'is_sway'."""
        return self._is_sway

    @is_sway.setter
    def is_sway(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_sway' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'is_sway' field must be an integer in [-128, 127]"
        self._is_sway = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def yaw_speed(self):
        """Message field 'yaw_speed'."""
        return self._yaw_speed

    @yaw_speed.setter
    def yaw_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_speed = value

    @builtins.property
    def yaw_time(self):
        """Message field 'yaw_time'."""
        return self._yaw_time

    @yaw_time.setter
    def yaw_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_time = value

    @builtins.property
    def is_yaw(self):
        """Message field 'is_yaw'."""
        return self._is_yaw

    @is_yaw.setter
    def is_yaw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_yaw' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'is_yaw' field must be an integer in [-128, 127]"
        self._is_yaw = value

    @builtins.property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'depth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth = value

    @builtins.property
    def depth_speed(self):
        """Message field 'depth_speed'."""
        return self._depth_speed

    @depth_speed.setter
    def depth_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'depth_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth_speed = value

    @builtins.property
    def depth_time(self):
        """Message field 'depth_time'."""
        return self._depth_time

    @depth_time.setter
    def depth_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'depth_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth_time = value

    @builtins.property
    def is_depth(self):
        """Message field 'is_depth'."""
        return self._is_depth

    @is_depth.setter
    def is_depth(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_depth' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'is_depth' field must be an integer in [-128, 127]"
        self._is_depth = value

    @builtins.property
    def is_absolute(self):
        """Message field 'is_absolute'."""
        return self._is_absolute

    @is_absolute.setter
    def is_absolute(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'is_absolute' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'is_absolute' field must be an integer in [-128, 127]"
        self._is_absolute = value

    @builtins.property
    def wait_for_max_timer_to_timeout(self):
        """Message field 'wait_for_max_timer_to_timeout'."""
        return self._wait_for_max_timer_to_timeout

    @wait_for_max_timer_to_timeout.setter
    def wait_for_max_timer_to_timeout(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'wait_for_max_timer_to_timeout' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'wait_for_max_timer_to_timeout' field must be an integer in [-128, 127]"
        self._wait_for_max_timer_to_timeout = value

    @builtins.property
    def mode_after_last_cmd(self):
        """Message field 'mode_after_last_cmd'."""
        return self._mode_after_last_cmd

    @mode_after_last_cmd.setter
    def mode_after_last_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mode_after_last_cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mode_after_last_cmd' field must be an integer in [-128, 127]"
        self._mode_after_last_cmd = value
