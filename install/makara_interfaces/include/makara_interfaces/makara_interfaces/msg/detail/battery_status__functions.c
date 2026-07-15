// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from makara_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice
#include "makara_interfaces/msg/detail/battery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `battery1`
// Member `battery2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
makara_interfaces__msg__BatteryStatus__init(makara_interfaces__msg__BatteryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    makara_interfaces__msg__BatteryStatus__fini(msg);
    return false;
  }
  // battery1
  if (!rosidl_runtime_c__float__Sequence__init(&msg->battery1, 0)) {
    makara_interfaces__msg__BatteryStatus__fini(msg);
    return false;
  }
  // battery2
  if (!rosidl_runtime_c__float__Sequence__init(&msg->battery2, 0)) {
    makara_interfaces__msg__BatteryStatus__fini(msg);
    return false;
  }
  return true;
}

void
makara_interfaces__msg__BatteryStatus__fini(makara_interfaces__msg__BatteryStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // battery1
  rosidl_runtime_c__float__Sequence__fini(&msg->battery1);
  // battery2
  rosidl_runtime_c__float__Sequence__fini(&msg->battery2);
}

bool
makara_interfaces__msg__BatteryStatus__are_equal(const makara_interfaces__msg__BatteryStatus * lhs, const makara_interfaces__msg__BatteryStatus * rhs)
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
  // battery1
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->battery1), &(rhs->battery1)))
  {
    return false;
  }
  // battery2
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->battery2), &(rhs->battery2)))
  {
    return false;
  }
  return true;
}

bool
makara_interfaces__msg__BatteryStatus__copy(
  const makara_interfaces__msg__BatteryStatus * input,
  makara_interfaces__msg__BatteryStatus * output)
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
  // battery1
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->battery1), &(output->battery1)))
  {
    return false;
  }
  // battery2
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->battery2), &(output->battery2)))
  {
    return false;
  }
  return true;
}

makara_interfaces__msg__BatteryStatus *
makara_interfaces__msg__BatteryStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__BatteryStatus * msg = (makara_interfaces__msg__BatteryStatus *)allocator.allocate(sizeof(makara_interfaces__msg__BatteryStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(makara_interfaces__msg__BatteryStatus));
  bool success = makara_interfaces__msg__BatteryStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
makara_interfaces__msg__BatteryStatus__destroy(makara_interfaces__msg__BatteryStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    makara_interfaces__msg__BatteryStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
makara_interfaces__msg__BatteryStatus__Sequence__init(makara_interfaces__msg__BatteryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__BatteryStatus * data = NULL;

  if (size) {
    data = (makara_interfaces__msg__BatteryStatus *)allocator.zero_allocate(size, sizeof(makara_interfaces__msg__BatteryStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = makara_interfaces__msg__BatteryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        makara_interfaces__msg__BatteryStatus__fini(&data[i - 1]);
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
makara_interfaces__msg__BatteryStatus__Sequence__fini(makara_interfaces__msg__BatteryStatus__Sequence * array)
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
      makara_interfaces__msg__BatteryStatus__fini(&array->data[i]);
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

makara_interfaces__msg__BatteryStatus__Sequence *
makara_interfaces__msg__BatteryStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  makara_interfaces__msg__BatteryStatus__Sequence * array = (makara_interfaces__msg__BatteryStatus__Sequence *)allocator.allocate(sizeof(makara_interfaces__msg__BatteryStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = makara_interfaces__msg__BatteryStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
makara_interfaces__msg__BatteryStatus__Sequence__destroy(makara_interfaces__msg__BatteryStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    makara_interfaces__msg__BatteryStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
makara_interfaces__msg__BatteryStatus__Sequence__are_equal(const makara_interfaces__msg__BatteryStatus__Sequence * lhs, const makara_interfaces__msg__BatteryStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!makara_interfaces__msg__BatteryStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
makara_interfaces__msg__BatteryStatus__Sequence__copy(
  const makara_interfaces__msg__BatteryStatus__Sequence * input,
  makara_interfaces__msg__BatteryStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(makara_interfaces__msg__BatteryStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    makara_interfaces__msg__BatteryStatus * data =
      (makara_interfaces__msg__BatteryStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!makara_interfaces__msg__BatteryStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          makara_interfaces__msg__BatteryStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!makara_interfaces__msg__BatteryStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
