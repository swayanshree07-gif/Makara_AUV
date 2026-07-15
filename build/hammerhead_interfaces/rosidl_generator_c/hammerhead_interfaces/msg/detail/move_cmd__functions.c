// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hammerhead_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice
#include "hammerhead_interfaces/msg/detail/move_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hammerhead_interfaces__msg__MoveCmd__init(hammerhead_interfaces__msg__MoveCmd * msg)
{
  if (!msg) {
    return false;
  }
  // surge
  // surge_speed
  // surge_time
  // is_surge
  // sway
  // sway_speed
  // sway_time
  // is_sway
  // yaw
  // yaw_speed
  // yaw_time
  // is_yaw
  // depth
  // depth_speed
  // depth_time
  // is_depth
  // is_absolute
  // wait_for_max_timer_to_timeout
  // mode_after_last_cmd
  return true;
}

void
hammerhead_interfaces__msg__MoveCmd__fini(hammerhead_interfaces__msg__MoveCmd * msg)
{
  if (!msg) {
    return;
  }
  // surge
  // surge_speed
  // surge_time
  // is_surge
  // sway
  // sway_speed
  // sway_time
  // is_sway
  // yaw
  // yaw_speed
  // yaw_time
  // is_yaw
  // depth
  // depth_speed
  // depth_time
  // is_depth
  // is_absolute
  // wait_for_max_timer_to_timeout
  // mode_after_last_cmd
}

bool
hammerhead_interfaces__msg__MoveCmd__are_equal(const hammerhead_interfaces__msg__MoveCmd * lhs, const hammerhead_interfaces__msg__MoveCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // surge
  if (lhs->surge != rhs->surge) {
    return false;
  }
  // surge_speed
  if (lhs->surge_speed != rhs->surge_speed) {
    return false;
  }
  // surge_time
  if (lhs->surge_time != rhs->surge_time) {
    return false;
  }
  // is_surge
  if (lhs->is_surge != rhs->is_surge) {
    return false;
  }
  // sway
  if (lhs->sway != rhs->sway) {
    return false;
  }
  // sway_speed
  if (lhs->sway_speed != rhs->sway_speed) {
    return false;
  }
  // sway_time
  if (lhs->sway_time != rhs->sway_time) {
    return false;
  }
  // is_sway
  if (lhs->is_sway != rhs->is_sway) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // yaw_speed
  if (lhs->yaw_speed != rhs->yaw_speed) {
    return false;
  }
  // yaw_time
  if (lhs->yaw_time != rhs->yaw_time) {
    return false;
  }
  // is_yaw
  if (lhs->is_yaw != rhs->is_yaw) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  // depth_speed
  if (lhs->depth_speed != rhs->depth_speed) {
    return false;
  }
  // depth_time
  if (lhs->depth_time != rhs->depth_time) {
    return false;
  }
  // is_depth
  if (lhs->is_depth != rhs->is_depth) {
    return false;
  }
  // is_absolute
  if (lhs->is_absolute != rhs->is_absolute) {
    return false;
  }
  // wait_for_max_timer_to_timeout
  if (lhs->wait_for_max_timer_to_timeout != rhs->wait_for_max_timer_to_timeout) {
    return false;
  }
  // mode_after_last_cmd
  if (lhs->mode_after_last_cmd != rhs->mode_after_last_cmd) {
    return false;
  }
  return true;
}

bool
hammerhead_interfaces__msg__MoveCmd__copy(
  const hammerhead_interfaces__msg__MoveCmd * input,
  hammerhead_interfaces__msg__MoveCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // surge
  output->surge = input->surge;
  // surge_speed
  output->surge_speed = input->surge_speed;
  // surge_time
  output->surge_time = input->surge_time;
  // is_surge
  output->is_surge = input->is_surge;
  // sway
  output->sway = input->sway;
  // sway_speed
  output->sway_speed = input->sway_speed;
  // sway_time
  output->sway_time = input->sway_time;
  // is_sway
  output->is_sway = input->is_sway;
  // yaw
  output->yaw = input->yaw;
  // yaw_speed
  output->yaw_speed = input->yaw_speed;
  // yaw_time
  output->yaw_time = input->yaw_time;
  // is_yaw
  output->is_yaw = input->is_yaw;
  // depth
  output->depth = input->depth;
  // depth_speed
  output->depth_speed = input->depth_speed;
  // depth_time
  output->depth_time = input->depth_time;
  // is_depth
  output->is_depth = input->is_depth;
  // is_absolute
  output->is_absolute = input->is_absolute;
  // wait_for_max_timer_to_timeout
  output->wait_for_max_timer_to_timeout = input->wait_for_max_timer_to_timeout;
  // mode_after_last_cmd
  output->mode_after_last_cmd = input->mode_after_last_cmd;
  return true;
}

hammerhead_interfaces__msg__MoveCmd *
hammerhead_interfaces__msg__MoveCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__MoveCmd * msg = (hammerhead_interfaces__msg__MoveCmd *)allocator.allocate(sizeof(hammerhead_interfaces__msg__MoveCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hammerhead_interfaces__msg__MoveCmd));
  bool success = hammerhead_interfaces__msg__MoveCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hammerhead_interfaces__msg__MoveCmd__destroy(hammerhead_interfaces__msg__MoveCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hammerhead_interfaces__msg__MoveCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hammerhead_interfaces__msg__MoveCmd__Sequence__init(hammerhead_interfaces__msg__MoveCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__MoveCmd * data = NULL;

  if (size) {
    data = (hammerhead_interfaces__msg__MoveCmd *)allocator.zero_allocate(size, sizeof(hammerhead_interfaces__msg__MoveCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hammerhead_interfaces__msg__MoveCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hammerhead_interfaces__msg__MoveCmd__fini(&data[i - 1]);
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
hammerhead_interfaces__msg__MoveCmd__Sequence__fini(hammerhead_interfaces__msg__MoveCmd__Sequence * array)
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
      hammerhead_interfaces__msg__MoveCmd__fini(&array->data[i]);
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

hammerhead_interfaces__msg__MoveCmd__Sequence *
hammerhead_interfaces__msg__MoveCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hammerhead_interfaces__msg__MoveCmd__Sequence * array = (hammerhead_interfaces__msg__MoveCmd__Sequence *)allocator.allocate(sizeof(hammerhead_interfaces__msg__MoveCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hammerhead_interfaces__msg__MoveCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hammerhead_interfaces__msg__MoveCmd__Sequence__destroy(hammerhead_interfaces__msg__MoveCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hammerhead_interfaces__msg__MoveCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hammerhead_interfaces__msg__MoveCmd__Sequence__are_equal(const hammerhead_interfaces__msg__MoveCmd__Sequence * lhs, const hammerhead_interfaces__msg__MoveCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hammerhead_interfaces__msg__MoveCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hammerhead_interfaces__msg__MoveCmd__Sequence__copy(
  const hammerhead_interfaces__msg__MoveCmd__Sequence * input,
  hammerhead_interfaces__msg__MoveCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hammerhead_interfaces__msg__MoveCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hammerhead_interfaces__msg__MoveCmd * data =
      (hammerhead_interfaces__msg__MoveCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hammerhead_interfaces__msg__MoveCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hammerhead_interfaces__msg__MoveCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hammerhead_interfaces__msg__MoveCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
