// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from svan_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "svan_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
#include "svan_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "svan_msgs/msg/detail/trajectory__functions.h"
#include "svan_msgs/msg/detail/trajectory__struct.h"


// Include directives for member types
// Member `position`
// Member `velocity`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  svan_msgs__msg__Trajectory__init(message_memory);
}

void svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function(void * message_memory)
{
  svan_msgs__msg__Trajectory__fini(message_memory);
}

size_t svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__acceleration(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__acceleration(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[4] = {
  {
    "gait_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svan_msgs__msg__Trajectory, gait_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svan_msgs__msg__Trajectory, position),  // bytes offset in struct
    NULL,  // default value
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__position,  // size() function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__position,  // get_const(index) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__position,  // get(index) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__position,  // fetch(index, &value) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__position,  // assign(index, value) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svan_msgs__msg__Trajectory, velocity),  // bytes offset in struct
    NULL,  // default value
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__velocity,  // size() function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__velocity,  // get_const(index) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__velocity,  // get(index) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__velocity,  // fetch(index, &value) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__velocity,  // assign(index, value) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__velocity  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svan_msgs__msg__Trajectory, acceleration),  // bytes offset in struct
    NULL,  // default value
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__acceleration,  // size() function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__acceleration,  // get_const(index) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__acceleration,  // get(index) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__acceleration,  // fetch(index, &value) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__acceleration,  // assign(index, value) function pointer
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__acceleration  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members = {
  "svan_msgs__msg",  // message namespace
  "Trajectory",  // message name
  4,  // number of fields
  sizeof(svan_msgs__msg__Trajectory),
  svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array,  // message members
  svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle = {
  0,
  &svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_svan_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, svan_msgs, msg, Trajectory)() {
  if (!svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier) {
    svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &svan_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
