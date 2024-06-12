// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from svan_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
#define SVAN_MSGS__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Position in the package svan_msgs.
typedef struct svan_msgs__msg__Position
{
  float x;
  float y;
  float z;
} svan_msgs__msg__Position;

// Struct for a sequence of svan_msgs__msg__Position.
typedef struct svan_msgs__msg__Position__Sequence
{
  svan_msgs__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} svan_msgs__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SVAN_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
