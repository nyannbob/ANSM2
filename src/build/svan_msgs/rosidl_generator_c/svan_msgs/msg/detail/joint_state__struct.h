// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from svan_msgs:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define SVAN_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'velocity'
// Member 'effort'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointState in the package svan_msgs.
typedef struct svan_msgs__msg__JointState
{
  int32_t gait_id;
  rosidl_runtime_c__float__Sequence position;
  rosidl_runtime_c__float__Sequence velocity;
  rosidl_runtime_c__float__Sequence effort;
} svan_msgs__msg__JointState;

// Struct for a sequence of svan_msgs__msg__JointState.
typedef struct svan_msgs__msg__JointState__Sequence
{
  svan_msgs__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} svan_msgs__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SVAN_MSGS__MSG__DETAIL__JOINT_STATE__STRUCT_H_
