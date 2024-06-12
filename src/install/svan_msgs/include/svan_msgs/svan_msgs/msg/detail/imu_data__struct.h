// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from svan_msgs:msg/ImuData.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_H_
#define SVAN_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'base_orientation'
// Member 'base_orientation_uncertainty'
#include "svan_msgs/msg/detail/euler_xyz__struct.h"
// Member 'angular_rate'
// Member 'angular_rate_bias'
// Member 'angular_rate_bias_uncertainty'
// Member 'acceleration'
#include "svan_msgs/msg/detail/position__struct.h"

/// Struct defined in msg/ImuData in the package svan_msgs.
typedef struct svan_msgs__msg__ImuData
{
  svan_msgs__msg__EulerXYZ base_orientation;
  svan_msgs__msg__Position angular_rate;
  svan_msgs__msg__Position angular_rate_bias;
  svan_msgs__msg__Position angular_rate_bias_uncertainty;
  svan_msgs__msg__Position acceleration;
  svan_msgs__msg__EulerXYZ base_orientation_uncertainty;
} svan_msgs__msg__ImuData;

// Struct for a sequence of svan_msgs__msg__ImuData.
typedef struct svan_msgs__msg__ImuData__Sequence
{
  svan_msgs__msg__ImuData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} svan_msgs__msg__ImuData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SVAN_MSGS__MSG__DETAIL__IMU_DATA__STRUCT_H_
