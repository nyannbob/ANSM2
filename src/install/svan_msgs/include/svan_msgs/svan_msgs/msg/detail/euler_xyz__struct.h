// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from svan_msgs:msg/EulerXYZ.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__EULER_XYZ__STRUCT_H_
#define SVAN_MSGS__MSG__DETAIL__EULER_XYZ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EulerXYZ in the package svan_msgs.
typedef struct svan_msgs__msg__EulerXYZ
{
  float roll;
  float pitch;
  float yaw;
} svan_msgs__msg__EulerXYZ;

// Struct for a sequence of svan_msgs__msg__EulerXYZ.
typedef struct svan_msgs__msg__EulerXYZ__Sequence
{
  svan_msgs__msg__EulerXYZ * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} svan_msgs__msg__EulerXYZ__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SVAN_MSGS__MSG__DETAIL__EULER_XYZ__STRUCT_H_
