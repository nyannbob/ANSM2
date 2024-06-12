// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from svan_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define SVAN_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

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
// Member 'acceleration'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Trajectory in the package svan_msgs.
typedef struct svan_msgs__msg__Trajectory
{
  int32_t gait_id;
  rosidl_runtime_c__float__Sequence position;
  rosidl_runtime_c__float__Sequence velocity;
  rosidl_runtime_c__float__Sequence acceleration;
} svan_msgs__msg__Trajectory;

// Struct for a sequence of svan_msgs__msg__Trajectory.
typedef struct svan_msgs__msg__Trajectory__Sequence
{
  svan_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} svan_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SVAN_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
