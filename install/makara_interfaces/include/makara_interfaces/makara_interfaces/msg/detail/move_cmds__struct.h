// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/move_cmds.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_H_

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
#include "makara_interfaces/msg/detail/move_cmd__struct.h"

/// Struct defined in msg/MoveCmds in the package makara_interfaces.
typedef struct makara_interfaces__msg__MoveCmds
{
  int32_t len;
  makara_interfaces__msg__MoveCmd__Sequence list;
} makara_interfaces__msg__MoveCmds;

// Struct for a sequence of makara_interfaces__msg__MoveCmds.
typedef struct makara_interfaces__msg__MoveCmds__Sequence
{
  makara_interfaces__msg__MoveCmds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__MoveCmds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__MOVE_CMDS__STRUCT_H_
