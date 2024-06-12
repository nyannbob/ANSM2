# generated from rosidl_generator_py/resource/_idl.py.em
# with input from svan_msgs:msg/ImuData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImuData(type):
    """Metaclass of message 'ImuData'."""

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
            module = import_type_support('svan_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'svan_msgs.msg.ImuData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu_data

            from svan_msgs.msg import EulerXYZ
            if EulerXYZ.__class__._TYPE_SUPPORT is None:
                EulerXYZ.__class__.__import_type_support__()

            from svan_msgs.msg import Position
            if Position.__class__._TYPE_SUPPORT is None:
                Position.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuData(metaclass=Metaclass_ImuData):
    """Message class 'ImuData'."""

    __slots__ = [
        '_base_orientation',
        '_angular_rate',
        '_angular_rate_bias',
        '_angular_rate_bias_uncertainty',
        '_acceleration',
        '_base_orientation_uncertainty',
    ]

    _fields_and_field_types = {
        'base_orientation': 'svan_msgs/EulerXYZ',
        'angular_rate': 'svan_msgs/Position',
        'angular_rate_bias': 'svan_msgs/Position',
        'angular_rate_bias_uncertainty': 'svan_msgs/Position',
        'acceleration': 'svan_msgs/Position',
        'base_orientation_uncertainty': 'svan_msgs/EulerXYZ',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['svan_msgs', 'msg'], 'EulerXYZ'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['svan_msgs', 'msg'], 'Position'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['svan_msgs', 'msg'], 'Position'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['svan_msgs', 'msg'], 'Position'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['svan_msgs', 'msg'], 'Position'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['svan_msgs', 'msg'], 'EulerXYZ'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from svan_msgs.msg import EulerXYZ
        self.base_orientation = kwargs.get('base_orientation', EulerXYZ())
        from svan_msgs.msg import Position
        self.angular_rate = kwargs.get('angular_rate', Position())
        from svan_msgs.msg import Position
        self.angular_rate_bias = kwargs.get('angular_rate_bias', Position())
        from svan_msgs.msg import Position
        self.angular_rate_bias_uncertainty = kwargs.get('angular_rate_bias_uncertainty', Position())
        from svan_msgs.msg import Position
        self.acceleration = kwargs.get('acceleration', Position())
        from svan_msgs.msg import EulerXYZ
        self.base_orientation_uncertainty = kwargs.get('base_orientation_uncertainty', EulerXYZ())

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
        if self.base_orientation != other.base_orientation:
            return False
        if self.angular_rate != other.angular_rate:
            return False
        if self.angular_rate_bias != other.angular_rate_bias:
            return False
        if self.angular_rate_bias_uncertainty != other.angular_rate_bias_uncertainty:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.base_orientation_uncertainty != other.base_orientation_uncertainty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base_orientation(self):
        """Message field 'base_orientation'."""
        return self._base_orientation

    @base_orientation.setter
    def base_orientation(self, value):
        if __debug__:
            from svan_msgs.msg import EulerXYZ
            assert \
                isinstance(value, EulerXYZ), \
                "The 'base_orientation' field must be a sub message of type 'EulerXYZ'"
        self._base_orientation = value

    @builtins.property
    def angular_rate(self):
        """Message field 'angular_rate'."""
        return self._angular_rate

    @angular_rate.setter
    def angular_rate(self, value):
        if __debug__:
            from svan_msgs.msg import Position
            assert \
                isinstance(value, Position), \
                "The 'angular_rate' field must be a sub message of type 'Position'"
        self._angular_rate = value

    @builtins.property
    def angular_rate_bias(self):
        """Message field 'angular_rate_bias'."""
        return self._angular_rate_bias

    @angular_rate_bias.setter
    def angular_rate_bias(self, value):
        if __debug__:
            from svan_msgs.msg import Position
            assert \
                isinstance(value, Position), \
                "The 'angular_rate_bias' field must be a sub message of type 'Position'"
        self._angular_rate_bias = value

    @builtins.property
    def angular_rate_bias_uncertainty(self):
        """Message field 'angular_rate_bias_uncertainty'."""
        return self._angular_rate_bias_uncertainty

    @angular_rate_bias_uncertainty.setter
    def angular_rate_bias_uncertainty(self, value):
        if __debug__:
            from svan_msgs.msg import Position
            assert \
                isinstance(value, Position), \
                "The 'angular_rate_bias_uncertainty' field must be a sub message of type 'Position'"
        self._angular_rate_bias_uncertainty = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from svan_msgs.msg import Position
            assert \
                isinstance(value, Position), \
                "The 'acceleration' field must be a sub message of type 'Position'"
        self._acceleration = value

    @builtins.property
    def base_orientation_uncertainty(self):
        """Message field 'base_orientation_uncertainty'."""
        return self._base_orientation_uncertainty

    @base_orientation_uncertainty.setter
    def base_orientation_uncertainty(self, value):
        if __debug__:
            from svan_msgs.msg import EulerXYZ
            assert \
                isinstance(value, EulerXYZ), \
                "The 'base_orientation_uncertainty' field must be a sub message of type 'EulerXYZ'"
        self._base_orientation_uncertainty = value
