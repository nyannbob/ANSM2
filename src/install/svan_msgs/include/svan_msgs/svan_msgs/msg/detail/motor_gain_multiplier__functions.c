// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from svan_msgs:msg/MotorGainMultiplier.idl
// generated code does not contain a copyright notice
#include "svan_msgs/msg/detail/motor_gain_multiplier__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `kp_scale`
// Member `kd_scale`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
svan_msgs__msg__MotorGainMultiplier__init(svan_msgs__msg__MotorGainMultiplier * msg)
{
  if (!msg) {
    return false;
  }
  // kp_scale
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kp_scale, 0)) {
    svan_msgs__msg__MotorGainMultiplier__fini(msg);
    return false;
  }
  // kd_scale
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kd_scale, 0)) {
    svan_msgs__msg__MotorGainMultiplier__fini(msg);
    return false;
  }
  return true;
}

void
svan_msgs__msg__MotorGainMultiplier__fini(svan_msgs__msg__MotorGainMultiplier * msg)
{
  if (!msg) {
    return;
  }
  // kp_scale
  rosidl_runtime_c__float__Sequence__fini(&msg->kp_scale);
  // kd_scale
  rosidl_runtime_c__float__Sequence__fini(&msg->kd_scale);
}

bool
svan_msgs__msg__MotorGainMultiplier__are_equal(const svan_msgs__msg__MotorGainMultiplier * lhs, const svan_msgs__msg__MotorGainMultiplier * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kp_scale
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->kp_scale), &(rhs->kp_scale)))
  {
    return false;
  }
  // kd_scale
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->kd_scale), &(rhs->kd_scale)))
  {
    return false;
  }
  return true;
}

bool
svan_msgs__msg__MotorGainMultiplier__copy(
  const svan_msgs__msg__MotorGainMultiplier * input,
  svan_msgs__msg__MotorGainMultiplier * output)
{
  if (!input || !output) {
    return false;
  }
  // kp_scale
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->kp_scale), &(output->kp_scale)))
  {
    return false;
  }
  // kd_scale
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->kd_scale), &(output->kd_scale)))
  {
    return false;
  }
  return true;
}

svan_msgs__msg__MotorGainMultiplier *
svan_msgs__msg__MotorGainMultiplier__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__MotorGainMultiplier * msg = (svan_msgs__msg__MotorGainMultiplier *)allocator.allocate(sizeof(svan_msgs__msg__MotorGainMultiplier), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(svan_msgs__msg__MotorGainMultiplier));
  bool success = svan_msgs__msg__MotorGainMultiplier__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
svan_msgs__msg__MotorGainMultiplier__destroy(svan_msgs__msg__MotorGainMultiplier * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    svan_msgs__msg__MotorGainMultiplier__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
svan_msgs__msg__MotorGainMultiplier__Sequence__init(svan_msgs__msg__MotorGainMultiplier__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__MotorGainMultiplier * data = NULL;

  if (size) {
    data = (svan_msgs__msg__MotorGainMultiplier *)allocator.zero_allocate(size, sizeof(svan_msgs__msg__MotorGainMultiplier), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = svan_msgs__msg__MotorGainMultiplier__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        svan_msgs__msg__MotorGainMultiplier__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
svan_msgs__msg__MotorGainMultiplier__Sequence__fini(svan_msgs__msg__MotorGainMultiplier__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      svan_msgs__msg__MotorGainMultiplier__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

svan_msgs__msg__MotorGainMultiplier__Sequence *
svan_msgs__msg__MotorGainMultiplier__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__MotorGainMultiplier__Sequence * array = (svan_msgs__msg__MotorGainMultiplier__Sequence *)allocator.allocate(sizeof(svan_msgs__msg__MotorGainMultiplier__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = svan_msgs__msg__MotorGainMultiplier__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
svan_msgs__msg__MotorGainMultiplier__Sequence__destroy(svan_msgs__msg__MotorGainMultiplier__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    svan_msgs__msg__MotorGainMultiplier__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
svan_msgs__msg__MotorGainMultiplier__Sequence__are_equal(const svan_msgs__msg__MotorGainMultiplier__Sequence * lhs, const svan_msgs__msg__MotorGainMultiplier__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!svan_msgs__msg__MotorGainMultiplier__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
svan_msgs__msg__MotorGainMultiplier__Sequence__copy(
  const svan_msgs__msg__MotorGainMultiplier__Sequence * input,
  svan_msgs__msg__MotorGainMultiplier__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(svan_msgs__msg__MotorGainMultiplier);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    svan_msgs__msg__MotorGainMultiplier * data =
      (svan_msgs__msg__MotorGainMultiplier *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!svan_msgs__msg__MotorGainMultiplier__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          svan_msgs__msg__MotorGainMultiplier__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!svan_msgs__msg__MotorGainMultiplier__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
