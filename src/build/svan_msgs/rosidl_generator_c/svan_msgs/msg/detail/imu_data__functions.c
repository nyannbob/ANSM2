// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from svan_msgs:msg/ImuData.idl
// generated code does not contain a copyright notice
#include "svan_msgs/msg/detail/imu_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base_orientation`
// Member `base_orientation_uncertainty`
#include "svan_msgs/msg/detail/euler_xyz__functions.h"
// Member `angular_rate`
// Member `angular_rate_bias`
// Member `angular_rate_bias_uncertainty`
// Member `acceleration`
#include "svan_msgs/msg/detail/position__functions.h"

bool
svan_msgs__msg__ImuData__init(svan_msgs__msg__ImuData * msg)
{
  if (!msg) {
    return false;
  }
  // base_orientation
  if (!svan_msgs__msg__EulerXYZ__init(&msg->base_orientation)) {
    svan_msgs__msg__ImuData__fini(msg);
    return false;
  }
  // angular_rate
  if (!svan_msgs__msg__Position__init(&msg->angular_rate)) {
    svan_msgs__msg__ImuData__fini(msg);
    return false;
  }
  // angular_rate_bias
  if (!svan_msgs__msg__Position__init(&msg->angular_rate_bias)) {
    svan_msgs__msg__ImuData__fini(msg);
    return false;
  }
  // angular_rate_bias_uncertainty
  if (!svan_msgs__msg__Position__init(&msg->angular_rate_bias_uncertainty)) {
    svan_msgs__msg__ImuData__fini(msg);
    return false;
  }
  // acceleration
  if (!svan_msgs__msg__Position__init(&msg->acceleration)) {
    svan_msgs__msg__ImuData__fini(msg);
    return false;
  }
  // base_orientation_uncertainty
  if (!svan_msgs__msg__EulerXYZ__init(&msg->base_orientation_uncertainty)) {
    svan_msgs__msg__ImuData__fini(msg);
    return false;
  }
  return true;
}

void
svan_msgs__msg__ImuData__fini(svan_msgs__msg__ImuData * msg)
{
  if (!msg) {
    return;
  }
  // base_orientation
  svan_msgs__msg__EulerXYZ__fini(&msg->base_orientation);
  // angular_rate
  svan_msgs__msg__Position__fini(&msg->angular_rate);
  // angular_rate_bias
  svan_msgs__msg__Position__fini(&msg->angular_rate_bias);
  // angular_rate_bias_uncertainty
  svan_msgs__msg__Position__fini(&msg->angular_rate_bias_uncertainty);
  // acceleration
  svan_msgs__msg__Position__fini(&msg->acceleration);
  // base_orientation_uncertainty
  svan_msgs__msg__EulerXYZ__fini(&msg->base_orientation_uncertainty);
}

bool
svan_msgs__msg__ImuData__are_equal(const svan_msgs__msg__ImuData * lhs, const svan_msgs__msg__ImuData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_orientation
  if (!svan_msgs__msg__EulerXYZ__are_equal(
      &(lhs->base_orientation), &(rhs->base_orientation)))
  {
    return false;
  }
  // angular_rate
  if (!svan_msgs__msg__Position__are_equal(
      &(lhs->angular_rate), &(rhs->angular_rate)))
  {
    return false;
  }
  // angular_rate_bias
  if (!svan_msgs__msg__Position__are_equal(
      &(lhs->angular_rate_bias), &(rhs->angular_rate_bias)))
  {
    return false;
  }
  // angular_rate_bias_uncertainty
  if (!svan_msgs__msg__Position__are_equal(
      &(lhs->angular_rate_bias_uncertainty), &(rhs->angular_rate_bias_uncertainty)))
  {
    return false;
  }
  // acceleration
  if (!svan_msgs__msg__Position__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // base_orientation_uncertainty
  if (!svan_msgs__msg__EulerXYZ__are_equal(
      &(lhs->base_orientation_uncertainty), &(rhs->base_orientation_uncertainty)))
  {
    return false;
  }
  return true;
}

bool
svan_msgs__msg__ImuData__copy(
  const svan_msgs__msg__ImuData * input,
  svan_msgs__msg__ImuData * output)
{
  if (!input || !output) {
    return false;
  }
  // base_orientation
  if (!svan_msgs__msg__EulerXYZ__copy(
      &(input->base_orientation), &(output->base_orientation)))
  {
    return false;
  }
  // angular_rate
  if (!svan_msgs__msg__Position__copy(
      &(input->angular_rate), &(output->angular_rate)))
  {
    return false;
  }
  // angular_rate_bias
  if (!svan_msgs__msg__Position__copy(
      &(input->angular_rate_bias), &(output->angular_rate_bias)))
  {
    return false;
  }
  // angular_rate_bias_uncertainty
  if (!svan_msgs__msg__Position__copy(
      &(input->angular_rate_bias_uncertainty), &(output->angular_rate_bias_uncertainty)))
  {
    return false;
  }
  // acceleration
  if (!svan_msgs__msg__Position__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // base_orientation_uncertainty
  if (!svan_msgs__msg__EulerXYZ__copy(
      &(input->base_orientation_uncertainty), &(output->base_orientation_uncertainty)))
  {
    return false;
  }
  return true;
}

svan_msgs__msg__ImuData *
svan_msgs__msg__ImuData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__ImuData * msg = (svan_msgs__msg__ImuData *)allocator.allocate(sizeof(svan_msgs__msg__ImuData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(svan_msgs__msg__ImuData));
  bool success = svan_msgs__msg__ImuData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
svan_msgs__msg__ImuData__destroy(svan_msgs__msg__ImuData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    svan_msgs__msg__ImuData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
svan_msgs__msg__ImuData__Sequence__init(svan_msgs__msg__ImuData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__ImuData * data = NULL;

  if (size) {
    data = (svan_msgs__msg__ImuData *)allocator.zero_allocate(size, sizeof(svan_msgs__msg__ImuData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = svan_msgs__msg__ImuData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        svan_msgs__msg__ImuData__fini(&data[i - 1]);
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
svan_msgs__msg__ImuData__Sequence__fini(svan_msgs__msg__ImuData__Sequence * array)
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
      svan_msgs__msg__ImuData__fini(&array->data[i]);
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

svan_msgs__msg__ImuData__Sequence *
svan_msgs__msg__ImuData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  svan_msgs__msg__ImuData__Sequence * array = (svan_msgs__msg__ImuData__Sequence *)allocator.allocate(sizeof(svan_msgs__msg__ImuData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = svan_msgs__msg__ImuData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
svan_msgs__msg__ImuData__Sequence__destroy(svan_msgs__msg__ImuData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    svan_msgs__msg__ImuData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
svan_msgs__msg__ImuData__Sequence__are_equal(const svan_msgs__msg__ImuData__Sequence * lhs, const svan_msgs__msg__ImuData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!svan_msgs__msg__ImuData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
svan_msgs__msg__ImuData__Sequence__copy(
  const svan_msgs__msg__ImuData__Sequence * input,
  svan_msgs__msg__ImuData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(svan_msgs__msg__ImuData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    svan_msgs__msg__ImuData * data =
      (svan_msgs__msg__ImuData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!svan_msgs__msg__ImuData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          svan_msgs__msg__ImuData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!svan_msgs__msg__ImuData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
