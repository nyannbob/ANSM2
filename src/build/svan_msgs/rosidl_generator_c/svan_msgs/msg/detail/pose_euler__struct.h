// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from svan_msgs:msg/PoseEuler.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__POSE_EULER__STRUCT_H_
#define SVAN_MSGS__MSG__DETAIL__POSE_EULER__STRUCT_H_

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
#include "svan_msgs/msg/detail/position__struct.h"
// Member 'orientation'
#include "svan_msgs/msg/detail/euler_xyz__struct.h"

/// Struct defined in msg/PoseEuler in the package svan_msgs.
typedef struct svan_msgs__msg__PoseEuler
{
  svan_msgs__msg__Position position;
  svan_msgs__msg__EulerXYZ orientation;
} svan_msgs__msg__PoseEuler;

// Struct for a sequence of svan_msgs__msg__PoseEuler.
typedef struct svan_msgs__msg__PoseEuler__Sequence
{
  svan_msgs__msg__PoseEuler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} svan_msgs__msg__PoseEuler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SVAN_MSGS__MSG__DETAIL__POSE_EULER__STRUCT_H_
