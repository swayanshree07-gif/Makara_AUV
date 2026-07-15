// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/MoveCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/move_cmd.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMD__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MoveCmd in the package makara_interfaces.
typedef struct makara_interfaces__msg__MoveCmd
{
  float surge;
  float surge_speed;
  float surge_time;
  int8_t is_surge;
  float sway;
  float sway_speed;
  float sway_time;
  int8_t is_sway;
  float yaw;
  float yaw_speed;
  float yaw_time;
  int8_t is_yaw;
  float depth;
  float depth_speed;
  float depth_time;
  int8_t is_depth;
  int8_t is_absolute;
  int8_t wait_for_max_timer_to_timeout;
  int8_t mode_after_last_cmd;
} makara_interfaces__msg__MoveCmd;

// Struct for a sequence of makara_interfaces__msg__MoveCmd.
typedef struct makara_interfaces__msg__MoveCmd__Sequence
{
  makara_interfaces__msg__MoveCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__MoveCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMD__STRUCT_H_
