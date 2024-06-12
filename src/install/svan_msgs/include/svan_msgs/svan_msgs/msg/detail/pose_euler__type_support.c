// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from svan_msgs:msg/PoseEuler.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "svan_msgs/msg/detail/pose_euler__rosidl_typesupport_introspection_c.h"
#include "svan_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "svan_msgs/msg/detail/pose_euler__functions.h"
#include "svan_msgs/msg/detail/pose_euler__struct.h"


// Include directives for member types
// Member `position`
#include "svan_msgs/msg/position.h"
// Member `position`
#include "svan_msgs/msg/detail/position__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "svan_msgs/msg/euler_xyz.h"
// Member `orientation`
#include "svan_msgs/msg/detail/euler_xyz__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  svan_msgs__msg__PoseEuler__init(message_memory);
}

void svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_fini_function(void * message_memory)
{
  svan_msgs__msg__PoseEuler__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svan_msgs__msg__PoseEuler, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svan_msgs__msg__PoseEuler, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_members = {
  "svan_msgs__msg",  // message namespace
  "PoseEuler",  // message name
  2,  // number of fields
  sizeof(svan_msgs__msg__PoseEuler),
  svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_member_array,  // message members
  svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_init_function,  // function to initialize message memory (memory has to be allocated)
  svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_type_support_handle = {
  0,
  &svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_svan_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, svan_msgs, msg, PoseEuler)() {
  svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, svan_msgs, msg, Position)();
  svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, svan_msgs, msg, EulerXYZ)();
  if (!svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_type_support_handle.typesupport_identifier) {
    svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &svan_msgs__msg__PoseEuler__rosidl_typesupport_introspection_c__PoseEuler_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
