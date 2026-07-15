// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hammerhead_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice
#include "hammerhead_interfaces/msg/detail/move_cmds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `list`
#include "hammerhead_interfaces/msg/detail/move_cmd__functions.h"

bool
hammerhead_interfaces__msg__MoveCmds__init(hammerhead_interfaces__msg__MoveCmds * msg)
{
  if (!msg) {
    return false;
  }
  // len
  // list
  if (!hammerhead_interfaces__msg__MoveCmd__Sequence__init(&msg->list, 0)) {
    hammerhead_interfaces__msg__MoveCmds__fini(msg);
    return false;
  }
  return true;
}

void
hammerhead_interfaces__msg__MoveCmds__fini(hammerhead_interfaces__msg__MoveCmds * msg)
{
  if (!msg) {
    return;
  }
  // len
  // list
  hammerhead_interfaces__msg__MoveCmd__Sequence__fini(&msg->list);
}

bool
hammerhead_interfaces__msg__MoveCmds__are_equal(const hammerhead_interfaces__msg__MoveCmds * lhs, const hammerhead_interfaces__msg__MoveCmds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // len
  if (lhs->len != rhs->len) {
    return false;
  }
  // list
  if (!hammerhead_interfaces__msg__MoveCmd__Sequence__are_equal(
      &(lhs->list), &(rhs->list)))
  {
    return false;
  }
  return true;
}

bool
hammerhead_interfaces__msg__MoveCmds__copy(
  const hammerhead_interfaces__msg__MoveCmds * input,
  hammerhead_interfaces__msg__MoveCmds * output)
{
  if (!input || !output) {
    return false;
  }
  // len
  output->len = input->len;
  // list
  if (!hammerhead_interfaces__msg__MoveCmd__Sequence__copy(
      &(input->list), &(output->list)))
  {
    return false;
  }
  return true;
}

hammerhead_interfaces__msg__MoveCmds *
hammerhead_interfaces__msg__MoveCmds__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__MoveCmds * msg = (hammerhead_interfaces__msg__MoveCmds *)allocator.allocate(sizeof(hammerhead_interfaces__msg__MoveCmds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hammerhead_interfaces__msg__MoveCmds));
  bool success = hammerhead_interfaces__msg__MoveCmds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hammerhead_interfaces__msg__MoveCmds__destroy(hammerhead_interfaces__msg__MoveCmds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hammerhead_interfaces__msg__MoveCmds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hammerhead_interfaces__msg__MoveCmds__Sequence__init(hammerhead_interfaces__msg__MoveCmds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__MoveCmds * data = NULL;

  if (size) {
    data = (hammerhead_interfaces__msg__MoveCmds *)allocator.zero_allocate(size, sizeof(hammerhead_interfaces__msg__MoveCmds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hammerhead_interfaces__msg__MoveCmds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hammerhead_interfaces__msg__MoveCmds__fini(&data[i - 1]);
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
hammerhead_interfaces__msg__MoveCmds__Sequence__fini(hammerhead_interfaces__msg__MoveCmds__Sequence * array)
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
      hammerhead_interfaces__msg__MoveCmds__fini(&array->data[i]);
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

hammerhead_interfaces__msg__MoveCmds__Sequence *
hammerhead_interfaces__msg__MoveCmds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__MoveCmds__Sequence * array = (hammerhead_interfaces__msg__MoveCmds__Sequence *)allocator.allocate(sizeof(hammerhead_interfaces__msg__MoveCmds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hammerhead_interfaces__msg__MoveCmds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hammerhead_interfaces__msg__MoveCmds__Sequence__destroy(hammerhead_interfaces__msg__MoveCmds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hammerhead_interfaces__msg__MoveCmds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hammerhead_interfaces__msg__MoveCmds__Sequence__are_equal(const hammerhead_interfaces__msg__MoveCmds__Sequence * lhs, const hammerhead_interfaces__msg__MoveCmds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hammerhead_interfaces__msg__MoveCmds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hammerhead_interfaces__msg__MoveCmds__Sequence__copy(
  const hammerhead_interfaces__msg__MoveCmds__Sequence * input,
  hammerhead_interfaces__msg__MoveCmds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hammerhead_interfaces__msg__MoveCmds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hammerhead_interfaces__msg__MoveCmds * data =
      (hammerhead_interfaces__msg__MoveCmds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hammerhead_interfaces__msg__MoveCmds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hammerhead_interfaces__msg__MoveCmds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hammerhead_interfaces__msg__MoveCmds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
