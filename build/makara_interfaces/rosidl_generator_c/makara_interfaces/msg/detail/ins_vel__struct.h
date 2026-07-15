// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/InsVel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/ins_vel.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'vel'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/InsVel in the package makara_interfaces.
typedef struct makara_interfaces__msg__InsVel
{
  rosidl_runtime_c__float__Sequence vel;
} makara_interfaces__msg__InsVel;

// Struct for a sequence of makara_interfaces__msg__InsVel.
typedef struct makara_interfaces__msg__InsVel__Sequence
{
  makara_interfaces__msg__InsVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__InsVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__INS_VEL__STRUCT_H_
