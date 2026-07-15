// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hammerhead_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/move_cmds.h"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_H_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'list'
#include "hammerhead_interfaces/msg/detail/move_cmd__struct.h"

/// Struct defined in msg/MoveCmds in the package hammerhead_interfaces.
typedef struct hammerhead_interfaces__msg__MoveCmds
{
  int32_t len;
  hammerhead_interfaces__msg__MoveCmd__Sequence list;
} hammerhead_interfaces__msg__MoveCmds;

// Struct for a sequence of hammerhead_interfaces__msg__MoveCmds.
typedef struct hammerhead_interfaces__msg__MoveCmds__Sequence
{
  hammerhead_interfaces__msg__MoveCmds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hammerhead_interfaces__msg__MoveCmds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_H_
