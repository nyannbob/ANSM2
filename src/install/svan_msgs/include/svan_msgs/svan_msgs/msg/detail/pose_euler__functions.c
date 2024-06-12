// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from svan_msgs:msg/PoseEuler.idl
// generated code does not contain a copyright notice
#include "svan_msgs/msg/detail/pose_euler__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "svan_msgs/msg/detail/position__functions.h"
// Member `orientation`
#include "svan_msgs/msg/detail/euler_xyz__functions.h"

bool
svan_msgs__msg__PoseEuler__init(svan_msgs__msg__PoseEuler * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!svan_msgs__msg__Position__init(&msg->position)) {
    svan_msgs__msg__PoseEuler__fini(msg);
    return false;
  }
  // orientation
  if (!svan_msgs__msg__EulerXYZ__init(&msg->orientation)) {
    svan_msgs__msg__PoseEuler__fini(msg);
    return false;
  }
  return true;
}

void
svan_msgs__msg__PoseEuler__fini(svan_msgs__msg__PoseEuler * msg)
{
  if (!msg) {
    return;
  }
  // position
  svan_msgs__msg__Position__fini(&msg->position);
  // orientation
  svan_msgs__msg__EulerXYZ__fini(&msg->orientation);
}

bool
svan_msgs__msg__PoseEuler__are_equal(const svan_msgs__msg__PoseEuler * lhs, const svan_msgs__msg__PoseEuler * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!svan_msgs__msg__Position__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!svan_msgs__msg__EulerXYZ__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  return true;
}

bool
svan_msgs__msg__PoseEuler__copy(
  const svan_msgs__msg__PoseEuler * input,
  svan_msgs__msg__PoseEuler * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!svan_msgs__msg__Position__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!svan_msgs__msg__EulerXYZ__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  return true;
}

svan_msgs__msg__PoseEuler *
svan_msgs__msg__PoseEuler__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__PoseEuler * msg = (svan_msgs__msg__PoseEuler *)allocator.allocate(sizeof(svan_msgs__msg__PoseEuler), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(svan_msgs__msg__PoseEuler));
  bool success = svan_msgs__msg__PoseEuler__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
svan_msgs__msg__PoseEuler__destroy(svan_msgs__msg__PoseEuler * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    svan_msgs__msg__PoseEuler__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
svan_msgs__msg__PoseEuler__Sequence__init(svan_msgs__msg__PoseEuler__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__PoseEuler * data = NULL;

  if (size) {
    data = (svan_msgs__msg__PoseEuler *)allocator.zero_allocate(size, sizeof(svan_msgs__msg__PoseEuler), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = svan_msgs__msg__PoseEuler__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        svan_msgs__msg__PoseEuler__fini(&data[i - 1]);
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
svan_msgs__msg__PoseEuler__Sequence__fini(svan_msgs__msg__PoseEuler__Sequence * array)
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
      svan_msgs__msg__PoseEuler__fini(&array->data[i]);
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

svan_msgs__msg__PoseEuler__Sequence *
svan_msgs__msg__PoseEuler__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__PoseEuler__Sequence * array = (svan_msgs__msg__PoseEuler__Sequence *)allocator.allocate(sizeof(svan_msgs__msg__PoseEuler__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = svan_msgs__msg__PoseEuler__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
svan_msgs__msg__PoseEuler__Sequence__destroy(svan_msgs__msg__PoseEuler__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    svan_msgs__msg__PoseEuler__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
svan_msgs__msg__PoseEuler__Sequence__are_equal(const svan_msgs__msg__PoseEuler__Sequence * lhs, const svan_msgs__msg__PoseEuler__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!svan_msgs__msg__PoseEuler__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
svan_msgs__msg__PoseEuler__Sequence__copy(
  const svan_msgs__msg__PoseEuler__Sequence * input,
  svan_msgs__msg__PoseEuler__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(svan_msgs__msg__PoseEuler);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    svan_msgs__msg__PoseEuler * data =
      (svan_msgs__msg__PoseEuler *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!svan_msgs__msg__PoseEuler__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          svan_msgs__msg__PoseEuler__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!svan_msgs__msg__PoseEuler__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
