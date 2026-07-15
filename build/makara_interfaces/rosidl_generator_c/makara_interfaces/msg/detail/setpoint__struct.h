// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/setpoint.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'setpoints'
// Member 'joy'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Setpoint in the package makara_interfaces.
typedef struct makara_interfaces__msg__Setpoint
{
  rosidl_runtime_c__float__Sequence setpoints;
  rosidl_runtime_c__int16__Sequence joy;
} makara_interfaces__msg__Setpoint;

// Struct for a sequence of makara_interfaces__msg__Setpoint.
typedef struct makara_interfaces__msg__Setpoint__Sequence
{
  makara_interfaces__msg__Setpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__Setpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__SETPOINT__STRUCT_H_
