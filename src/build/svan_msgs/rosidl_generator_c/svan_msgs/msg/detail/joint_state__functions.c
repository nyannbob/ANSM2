// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from svan_msgs:msg/JointState.idl
// generated code does not contain a copyright notice
#include "svan_msgs/msg/detail/joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
// Member `velocity`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
svan_msgs__msg__JointState__init(svan_msgs__msg__JointState * msg)
{
  if (!msg) {
    return false;
  }
  // gait_id
  // position
  if (!rosidl_runtime_c__float__Sequence__init(&msg->position, 0)) {
    svan_msgs__msg__JointState__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__float__Sequence__init(&msg->velocity, 0)) {
    svan_msgs__msg__JointState__fini(msg);
    return false;
  }
  // effort
  if (!rosidl_runtime_c__float__Sequence__init(&msg->effort, 0)) {
    svan_msgs__msg__JointState__fini(msg);
    return false;
  }
  return true;
}

void
svan_msgs__msg__JointState__fini(svan_msgs__msg__JointState * msg)
{
  if (!msg) {
    return;
  }
  // gait_id
  // position
  rosidl_runtime_c__float__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__float__Sequence__fini(&msg->velocity);
  // effort
  rosidl_runtime_c__float__Sequence__fini(&msg->effort);
}

bool
svan_msgs__msg__JointState__are_equal(const svan_msgs__msg__JointState * lhs, const svan_msgs__msg__JointState * rhs)
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
  // effort
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->effort), &(rhs->effort)))
  {
    return false;
  }
  return true;
}

bool
svan_msgs__msg__JointState__copy(
  const svan_msgs__msg__JointState * input,
  svan_msgs__msg__JointState * output)
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
  // effort
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->effort), &(output->effort)))
  {
    return false;
  }
  return true;
}

svan_msgs__msg__JointState *
svan_msgs__msg__JointState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__JointState * msg = (svan_msgs__msg__JointState *)allocator.allocate(sizeof(svan_msgs__msg__JointState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(svan_msgs__msg__JointState));
  bool success = svan_msgs__msg__JointState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
svan_msgs__msg__JointState__destroy(svan_msgs__msg__JointState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    svan_msgs__msg__JointState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
svan_msgs__msg__JointState__Sequence__init(svan_msgs__msg__JointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__JointState * data = NULL;

  if (size) {
    data = (svan_msgs__msg__JointState *)allocator.zero_allocate(size, sizeof(svan_msgs__msg__JointState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = svan_msgs__msg__JointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        svan_msgs__msg__JointState__fini(&data[i - 1]);
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
svan_msgs__msg__JointState__Sequence__fini(svan_msgs__msg__JointState__Sequence * array)
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
      svan_msgs__msg__JointState__fini(&array->data[i]);
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

svan_msgs__msg__JointState__Sequence *
svan_msgs__msg__JointState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__JointState__Sequence * array = (svan_msgs__msg__JointState__Sequence *)allocator.allocate(sizeof(svan_msgs__msg__JointState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = svan_msgs__msg__JointState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
svan_msgs__msg__JointState__Sequence__destroy(svan_msgs__msg__JointState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    svan_msgs__msg__JointState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
svan_msgs__msg__JointState__Sequence__are_equal(const svan_msgs__msg__JointState__Sequence * lhs, const svan_msgs__msg__JointState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!svan_msgs__msg__JointState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
svan_msgs__msg__JointState__Sequence__copy(
  const svan_msgs__msg__JointState__Sequence * input,
  svan_msgs__msg__JointState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(svan_msgs__msg__JointState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    svan_msgs__msg__JointState * data =
      (svan_msgs__msg__JointState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!svan_msgs__msg__JointState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          svan_msgs__msg__JointState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!svan_msgs__msg__JointState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
