// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/combined.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__COMBINED__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__COMBINED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'angular'
// Member 'linear'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Combined in the package makara_interfaces.
/**
  * Roll, Pitch, Yaw
 */
typedef struct makara_interfaces__msg__Combined
{
  rosidl_runtime_c__float__Sequence angular;
  /// X, Y, Z
  rosidl_runtime_c__float__Sequence linear;
  float depth;
} makara_interfaces__msg__Combined;

// Struct for a sequence of makara_interfaces__msg__Combined.
typedef struct makara_interfaces__msg__Combined__Sequence
{
  makara_interfaces__msg__Combined * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__Combined__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__COMBINED__STRUCT_H_
