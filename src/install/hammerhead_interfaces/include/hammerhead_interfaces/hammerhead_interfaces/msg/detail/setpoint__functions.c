// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hammerhead_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice
#include "hammerhead_interfaces/msg/detail/setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `setpoints`
// Member `joy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hammerhead_interfaces__msg__Setpoint__init(hammerhead_interfaces__msg__Setpoint * msg)
{
  if (!msg) {
    return false;
  }
  // setpoints
  if (!rosidl_runtime_c__float__Sequence__init(&msg->setpoints, 0)) {
    hammerhead_interfaces__msg__Setpoint__fini(msg);
    return false;
  }
  // joy
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->joy, 0)) {
    hammerhead_interfaces__msg__Setpoint__fini(msg);
    return false;
  }
  return true;
}

void
hammerhead_interfaces__msg__Setpoint__fini(hammerhead_interfaces__msg__Setpoint * msg)
{
  if (!msg) {
    return;
  }
  // setpoints
  rosidl_runtime_c__float__Sequence__fini(&msg->setpoints);
  // joy
  rosidl_runtime_c__int16__Sequence__fini(&msg->joy);
}

bool
hammerhead_interfaces__msg__Setpoint__are_equal(const hammerhead_interfaces__msg__Setpoint * lhs, const hammerhead_interfaces__msg__Setpoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // setpoints
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->setpoints), &(rhs->setpoints)))
  {
    return false;
  }
  // joy
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->joy), &(rhs->joy)))
  {
    return false;
  }
  return true;
}

bool
hammerhead_interfaces__msg__Setpoint__copy(
  const hammerhead_interfaces__msg__Setpoint * input,
  hammerhead_interfaces__msg__Setpoint * output)
{
  if (!input || !output) {
    return false;
  }
  // setpoints
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->setpoints), &(output->setpoints)))
  {
    return false;
  }
  // joy
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->joy), &(output->joy)))
  {
    return false;
  }
  return true;
}

hammerhead_interfaces__msg__Setpoint *
hammerhead_interfaces__msg__Setpoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__Setpoint * msg = (hammerhead_interfaces__msg__Setpoint *)allocator.allocate(sizeof(hammerhead_interfaces__msg__Setpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hammerhead_interfaces__msg__Setpoint));
  bool success = hammerhead_interfaces__msg__Setpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hammerhead_interfaces__msg__Setpoint__destroy(hammerhead_interfaces__msg__Setpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hammerhead_interfaces__msg__Setpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hammerhead_interfaces__msg__Setpoint__Sequence__init(hammerhead_interfaces__msg__Setpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__Setpoint * data = NULL;

  if (size) {
    data = (hammerhead_interfaces__msg__Setpoint *)allocator.zero_allocate(size, sizeof(hammerhead_interfaces__msg__Setpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hammerhead_interfaces__msg__Setpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hammerhead_interfaces__msg__Setpoint__fini(&data[i - 1]);
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
hammerhead_interfaces__msg__Setpoint__Sequence__fini(hammerhead_interfaces__msg__Setpoint__Sequence * array)
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
      hammerhead_interfaces__msg__Setpoint__fini(&array->data[i]);
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

hammerhead_interfaces__msg__Setpoint__Sequence *
hammerhead_interfaces__msg__Setpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__Setpoint__Sequence * array = (hammerhead_interfaces__msg__Setpoint__Sequence *)allocator.allocate(sizeof(hammerhead_interfaces__msg__Setpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hammerhead_interfaces__msg__Setpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hammerhead_interfaces__msg__Setpoint__Sequence__destroy(hammerhead_interfaces__msg__Setpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hammerhead_interfaces__msg__Setpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hammerhead_interfaces__msg__Setpoint__Sequence__are_equal(const hammerhead_interfaces__msg__Setpoint__Sequence * lhs, const hammerhead_interfaces__msg__Setpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hammerhead_interfaces__msg__Setpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hammerhead_interfaces__msg__Setpoint__Sequence__copy(
  const hammerhead_interfaces__msg__Setpoint__Sequence * input,
  hammerhead_interfaces__msg__Setpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hammerhead_interfaces__msg__Setpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hammerhead_interfaces__msg__Setpoint * data =
      (hammerhead_interfaces__msg__Setpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hammerhead_interfaces__msg__Setpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hammerhead_interfaces__msg__Setpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hammerhead_interfaces__msg__Setpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
