// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from makara_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice
#include "makara_interfaces/msg/detail/combined__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `angular`
// Member `linear`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
makara_interfaces__msg__Combined__init(makara_interfaces__msg__Combined * msg)
{
  if (!msg) {
    return false;
  }
  // angular
  if (!rosidl_runtime_c__float__Sequence__init(&msg->angular, 0)) {
    makara_interfaces__msg__Combined__fini(msg);
    return false;
  }
  // linear
  if (!rosidl_runtime_c__float__Sequence__init(&msg->linear, 0)) {
    makara_interfaces__msg__Combined__fini(msg);
    return false;
  }
  // depth
  return true;
}

void
makara_interfaces__msg__Combined__fini(makara_interfaces__msg__Combined * msg)
{
  if (!msg) {
    return;
  }
  // angular
  rosidl_runtime_c__float__Sequence__fini(&msg->angular);
  // linear
  rosidl_runtime_c__float__Sequence__fini(&msg->linear);
  // depth
}

bool
makara_interfaces__msg__Combined__are_equal(const makara_interfaces__msg__Combined * lhs, const makara_interfaces__msg__Combined * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angular
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->angular), &(rhs->angular)))
  {
    return false;
  }
  // linear
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->linear), &(rhs->linear)))
  {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  return true;
}

bool
makara_interfaces__msg__Combined__copy(
  const makara_interfaces__msg__Combined * input,
  makara_interfaces__msg__Combined * output)
{
  if (!input || !output) {
    return false;
  }
  // angular
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->angular), &(output->angular)))
  {
    return false;
  }
  // linear
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->linear), &(output->linear)))
  {
    return false;
  }
  // depth
  output->depth = input->depth;
  return true;
}

makara_interfaces__msg__Combined *
makara_interfaces__msg__Combined__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__Combined * msg = (makara_interfaces__msg__Combined *)allocator.allocate(sizeof(makara_interfaces__msg__Combined), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(makara_interfaces__msg__Combined));
  bool success = makara_interfaces__msg__Combined__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
makara_interfaces__msg__Combined__destroy(makara_interfaces__msg__Combined * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    makara_interfaces__msg__Combined__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
makara_interfaces__msg__Combined__Sequence__init(makara_interfaces__msg__Combined__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__Combined * data = NULL;

  if (size) {
    data = (makara_interfaces__msg__Combined *)allocator.zero_allocate(size, sizeof(makara_interfaces__msg__Combined), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = makara_interfaces__msg__Combined__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        makara_interfaces__msg__Combined__fini(&data[i - 1]);
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
makara_interfaces__msg__Combined__Sequence__fini(makara_interfaces__msg__Combined__Sequence * array)
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
      makara_interfaces__msg__Combined__fini(&array->data[i]);
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

makara_interfaces__msg__Combined__Sequence *
makara_interfaces__msg__Combined__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__Combined__Sequence * array = (makara_interfaces__msg__Combined__Sequence *)allocator.allocate(sizeof(makara_interfaces__msg__Combined__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = makara_interfaces__msg__Combined__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
makara_interfaces__msg__Combined__Sequence__destroy(makara_interfaces__msg__Combined__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    makara_interfaces__msg__Combined__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
makara_interfaces__msg__Combined__Sequence__are_equal(const makara_interfaces__msg__Combined__Sequence * lhs, const makara_interfaces__msg__Combined__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!makara_interfaces__msg__Combined__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
makara_interfaces__msg__Combined__Sequence__copy(
  const makara_interfaces__msg__Combined__Sequence * input,
  makara_interfaces__msg__Combined__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(makara_interfaces__msg__Combined);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    makara_interfaces__msg__Combined * data =
      (makara_interfaces__msg__Combined *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!makara_interfaces__msg__Combined__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          makara_interfaces__msg__Combined__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!makara_interfaces__msg__Combined__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
