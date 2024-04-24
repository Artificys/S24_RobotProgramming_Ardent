# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aruco_interfaces:msg/ArucoLocation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArucoLocation(type):
    """Metaclass of message 'ArucoLocation'."""

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
            module = import_type_support('aruco_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aruco_interfaces.msg.ArucoLocation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aruco_location
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aruco_location
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aruco_location
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aruco_location
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aruco_location

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArucoLocation(metaclass=Metaclass_ArucoLocation):
    """Message class 'ArucoLocation'."""

    __slots__ = [
        '_aruco_pose',
        '_aruco_id',
        '_aruco_found',
    ]

    _fields_and_field_types = {
        'aruco_pose': 'geometry_msgs/Pose',
        'aruco_id': 'uint16',
        'aruco_found': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.aruco_pose = kwargs.get('aruco_pose', Pose())
        self.aruco_id = kwargs.get('aruco_id', int())
        self.aruco_found = kwargs.get('aruco_found', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.aruco_pose != other.aruco_pose:
            return False
        if self.aruco_id != other.aruco_id:
            return False
        if self.aruco_found != other.aruco_found:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def aruco_pose(self):
        """Message field 'aruco_pose'."""
        return self._aruco_pose

    @aruco_pose.setter
    def aruco_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'aruco_pose' field must be a sub message of type 'Pose'"
        self._aruco_pose = value

    @property
    def aruco_id(self):
        """Message field 'aruco_id'."""
        return self._aruco_id

    @aruco_id.setter
    def aruco_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aruco_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'aruco_id' field must be an unsigned integer in [0, 65535]"
        self._aruco_id = value

    @property
    def aruco_found(self):
        """Message field 'aruco_found'."""
        return self._aruco_found

    @aruco_found.setter
    def aruco_found(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aruco_found' field must be of type 'bool'"
        self._aruco_found = value
