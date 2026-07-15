// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hammerhead_interfaces:msg/Depth.idl
// generated code does not contain a copyright notice
#include "hammerhead_interfaces/msg/detail/depth__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
hammerhead_interfaces__msg__Depth__init(hammerhead_interfaces__msg__Depth * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hammerhead_interfaces__msg__Depth__fini(msg);
    return false;
  }
  // depth
  return true;
}

void
hammerhead_interfaces__msg__Depth__fini(hammerhead_interfaces__msg__Depth * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // depth
}

bool
hammerhead_interfaces__msg__Depth__are_equal(const hammerhead_interfaces__msg__Depth * lhs, const hammerhead_interfaces__msg__Depth * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
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
hammerhead_interfaces__msg__Depth__copy(
  const hammerhead_interfaces__msg__Depth * input,
  hammerhead_interfaces__msg__Depth * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // depth
  output->depth = input->depth;
  return true;
}

hammerhead_interfaces__msg__Depth *
hammerhead_interfaces__msg__Depth__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__Depth * msg = (hammerhead_interfaces__msg__Depth *)allocator.allocate(sizeof(hammerhead_interfaces__msg__Depth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hammerhead_interfaces__msg__Depth));
  bool success = hammerhead_interfaces__msg__Depth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hammerhead_interfaces__msg__Depth__destroy(hammerhead_interfaces__msg__Depth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hammerhead_interfaces__msg__Depth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hammerhead_interfaces__msg__Depth__Sequence__init(hammerhead_interfaces__msg__Depth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__Depth * data = NULL;

  if (size) {
    data = (hammerhead_interfaces__msg__Depth *)allocator.zero_allocate(size, sizeof(hammerhead_interfaces__msg__Depth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hammerhead_interfaces__msg__Depth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hammerhead_interfaces__msg__Depth__fini(&data[i - 1]);
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
hammerhead_interfaces__msg__Depth__Sequence__fini(hammerhead_interfaces__msg__Depth__Sequence * array)
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
      hammerhead_interfaces__msg__Depth__fini(&array->data[i]);
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

hammerhead_interfaces__msg__Depth__Sequence *
hammerhead_interfaces__msg__Depth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__Depth__Sequence * array = (hammerhead_interfaces__msg__Depth__Sequence *)allocator.allocate(sizeof(hammerhead_interfaces__msg__Depth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hammerhead_interfaces__msg__Depth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hammerhead_interfaces__msg__Depth__Sequence__destroy(hammerhead_interfaces__msg__Depth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hammerhead_interfaces__msg__Depth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hammerhead_interfaces__msg__Depth__Sequence__are_equal(const hammerhead_interfaces__msg__Depth__Sequence * lhs, const hammerhead_interfaces__msg__Depth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hammerhead_interfaces__msg__Depth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hammerhead_interfaces__msg__Depth__Sequence__copy(
  const hammerhead_interfaces__msg__Depth__Sequence * input,
  hammerhead_interfaces__msg__Depth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hammerhead_interfaces__msg__Depth);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hammerhead_interfaces__msg__Depth * data =
      (hammerhead_interfaces__msg__Depth *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hammerhead_interfaces__msg__Depth__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hammerhead_interfaces__msg__Depth__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hammerhead_interfaces__msg__Depth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
