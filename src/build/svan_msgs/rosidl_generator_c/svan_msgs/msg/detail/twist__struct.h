// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from svan_msgs:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__TWIST__STRUCT_H_
#define SVAN_MSGS__MSG__DETAIL__TWIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "svan_msgs/msg/detail/position__struct.h"

/// Struct defined in msg/Twist in the package svan_msgs.
typedef struct svan_msgs__msg__Twist
{
  svan_msgs__msg__Position linear;
  svan_msgs__msg__Position angular;
} svan_msgs__msg__Twist;

// Struct for a sequence of svan_msgs__msg__Twist.
typedef struct svan_msgs__msg__Twist__Sequence
{
  svan_msgs__msg__Twist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} svan_msgs__msg__Twist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SVAN_MSGS__MSG__DETAIL__TWIST__STRUCT_H_
