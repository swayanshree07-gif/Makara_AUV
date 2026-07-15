// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from makara_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "makara_interfaces/msg/position.h"


#ifndef MAKARA_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_
#define MAKARA_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Position in the package makara_interfaces.
typedef struct makara_interfaces__msg__Position
{
  float x;
  float y;
  float z;
  float roll;
  float pitch;
  float yaw;
} makara_interfaces__msg__Position;

// Struct for a sequence of makara_interfaces__msg__Position.
typedef struct makara_interfaces__msg__Position__Sequence
{
  makara_interfaces__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} makara_interfaces__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKARA_INTERFACES__MSG__DETAIL__POSITION__STRUCT_H_
