// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from makara_interfaces:msg/PID.idl
// generated code does not contain a copyright notice
#include "makara_interfaces/msg/detail/pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `kp`
// Member `ki`
// Member `kd`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
makara_interfaces__msg__PID__init(makara_interfaces__msg__PID * msg)
{
  if (!msg) {
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kp, 0)) {
    makara_interfaces__msg__PID__fini(msg);
    return false;
  }
  // ki
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ki, 0)) {
    makara_interfaces__msg__PID__fini(msg);
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kd, 0)) {
    makara_interfaces__msg__PID__fini(msg);
    return false;
  }
  return true;
}

void
makara_interfaces__msg__PID__fini(makara_interfaces__msg__PID * msg)
{
  if (!msg) {
    return;
  }
  // kp
  rosidl_runtime_c__float__Sequence__fini(&msg->kp);
  // ki
  rosidl_runtime_c__float__Sequence__fini(&msg->ki);
  // kd
  rosidl_runtime_c__float__Sequence__fini(&msg->kd);
}

bool
makara_interfaces__msg__PID__are_equal(const makara_interfaces__msg__PID * lhs, const makara_interfaces__msg__PID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->kp), &(rhs->kp)))
  {
    return false;
  }
  // ki
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ki), &(rhs->ki)))
  {
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->kd), &(rhs->kd)))
  {
    return false;
  }
  return true;
}

bool
makara_interfaces__msg__PID__copy(
  const makara_interfaces__msg__PID * input,
  makara_interfaces__msg__PID * output)
{
  if (!input || !output) {
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->kp), &(output->kp)))
  {
    return false;
  }
  // ki
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ki), &(output->ki)))
  {
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->kd), &(output->kd)))
  {
    return false;
  }
  return true;
}

makara_interfaces__msg__PID *
makara_interfaces__msg__PID__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__PID * msg = (makara_interfaces__msg__PID *)allocator.allocate(sizeof(makara_interfaces__msg__PID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(makara_interfaces__msg__PID));
  bool success = makara_interfaces__msg__PID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
makara_interfaces__msg__PID__destroy(makara_interfaces__msg__PID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    makara_interfaces__msg__PID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
makara_interfaces__msg__PID__Sequence__init(makara_interfaces__msg__PID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__PID * data = NULL;

  if (size) {
    data = (makara_interfaces__msg__PID *)allocator.zero_allocate(size, sizeof(makara_interfaces__msg__PID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = makara_interfaces__msg__PID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        makara_interfaces__msg__PID__fini(&data[i - 1]);
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
makara_interfaces__msg__PID__Sequence__fini(makara_interfaces__msg__PID__Sequence * array)
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
      makara_interfaces__msg__PID__fini(&array->data[i]);
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

makara_interfaces__msg__PID__Sequence *
makara_interfaces__msg__PID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__PID__Sequence * array = (makara_interfaces__msg__PID__Sequence *)allocator.allocate(sizeof(makara_interfaces__msg__PID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = makara_interfaces__msg__PID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
makara_interfaces__msg__PID__Sequence__destroy(makara_interfaces__msg__PID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    makara_interfaces__msg__PID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
makara_interfaces__msg__PID__Sequence__are_equal(const makara_interfaces__msg__PID__Sequence * lhs, const makara_interfaces__msg__PID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!makara_interfaces__msg__PID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
makara_interfaces__msg__PID__Sequence__copy(
  const makara_interfaces__msg__PID__Sequence * input,
  makara_interfaces__msg__PID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(makara_interfaces__msg__PID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    makara_interfaces__msg__PID * data =
      (makara_interfaces__msg__PID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!makara_interfaces__msg__PID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          makara_interfaces__msg__PID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!makara_interfaces__msg__PID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
