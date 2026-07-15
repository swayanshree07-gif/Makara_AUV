// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hammerhead_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hammerhead_interfaces/msg/combined.h"


#ifndef HAMMERHEAD_INTERFACES__MSG__DETAIL__COMBINED__STRUCT_H_
#define HAMMERHEAD_INTERFACES__MSG__DETAIL__COMBINED__STRUCT_H_

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

/// Struct defined in msg/Combined in the package hammerhead_interfaces.
/**
  * Roll, Pitch, Yaw
 */
typedef struct hammerhead_interfaces__msg__Combined
{
  rosidl_runtime_c__float__Sequence angular;
  /// X, Y, Z
  rosidl_runtime_c__float__Sequence linear;
  float depth;
} hammerhead_interfaces__msg__Combined;

// Struct for a sequence of hammerhead_interfaces__msg__Combined.
typedef struct hammerhead_interfaces__msg__Combined__Sequence
{
  hammerhead_interfaces__msg__Combined * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hammerhead_interfaces__msg__Combined__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAMMERHEAD_INTERFACES__MSG__DETAIL__COMBINED__STRUCT_H_
