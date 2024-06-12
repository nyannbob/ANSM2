// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from svan_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "svan_msgs/msg/detail/trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
// Member `velocity`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
svan_msgs__msg__Trajectory__init(svan_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // gait_id
  // position
  if (!rosidl_runtime_c__float__Sequence__init(&msg->position, 0)) {
    svan_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__float__Sequence__init(&msg->velocity, 0)) {
    svan_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acceleration, 0)) {
    svan_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
svan_msgs__msg__Trajectory__fini(svan_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // gait_id
  // position
  rosidl_runtime_c__float__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__float__Sequence__fini(&msg->velocity);
  // acceleration
  rosidl_runtime_c__float__Sequence__fini(&msg->acceleration);
}

bool
svan_msgs__msg__Trajectory__are_equal(const svan_msgs__msg__Trajectory * lhs, const svan_msgs__msg__Trajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gait_id
  if (lhs->gait_id != rhs->gait_id) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  return true;
}

bool
svan_msgs__msg__Trajectory__copy(
  const svan_msgs__msg__Trajectory * input,
  svan_msgs__msg__Trajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // gait_id
  output->gait_id = input->gait_id;
  // position
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  return true;
}

svan_msgs__msg__Trajectory *
svan_msgs__msg__Trajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__Trajectory * msg = (svan_msgs__msg__Trajectory *)allocator.allocate(sizeof(svan_msgs__msg__Trajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(svan_msgs__msg__Trajectory));
  bool success = svan_msgs__msg__Trajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
svan_msgs__msg__Trajectory__destroy(svan_msgs__msg__Trajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    svan_msgs__msg__Trajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
svan_msgs__msg__Trajectory__Sequence__init(svan_msgs__msg__Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__Trajectory * data = NULL;

  if (size) {
    data = (svan_msgs__msg__Trajectory *)allocator.zero_allocate(size, sizeof(svan_msgs__msg__Trajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = svan_msgs__msg__Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        svan_msgs__msg__Trajectory__fini(&data[i - 1]);
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
svan_msgs__msg__Trajectory__Sequence__fini(svan_msgs__msg__Trajectory__Sequence * array)
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
      svan_msgs__msg__Trajectory__fini(&array->data[i]);
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

svan_msgs__msg__Trajectory__Sequence *
svan_msgs__msg__Trajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__Trajectory__Sequence * array = (svan_msgs__msg__Trajectory__Sequence *)allocator.allocate(sizeof(svan_msgs__msg__Trajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = svan_msgs__msg__Trajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
svan_msgs__msg__Trajectory__Sequence__destroy(svan_msgs__msg__Trajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    svan_msgs__msg__Trajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
svan_msgs__msg__Trajectory__Sequence__are_equal(const svan_msgs__msg__Trajectory__Sequence * lhs, const svan_msgs__msg__Trajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!svan_msgs__msg__Trajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
svan_msgs__msg__Trajectory__Sequence__copy(
  const svan_msgs__msg__Trajectory__Sequence * input,
  svan_msgs__msg__Trajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(svan_msgs__msg__Trajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    svan_msgs__msg__Trajectory * data =
      (svan_msgs__msg__Trajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!svan_msgs__msg__Trajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          svan_msgs__msg__Trajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!svan_msgs__msg__Trajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
