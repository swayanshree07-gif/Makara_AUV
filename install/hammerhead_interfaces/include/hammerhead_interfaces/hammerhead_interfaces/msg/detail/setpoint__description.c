// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hammerhead_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice

#include "hammerhead_interfaces/msg/detail/setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_type_hash_t *
hammerhead_interfaces__msg__Setpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0xe5, 0x26, 0xdd, 0x76, 0xcf, 0xd5, 0xd8,
      0x5c, 0x48, 0x52, 0x1d, 0x87, 0x93, 0x51, 0x62,
      0x5a, 0x44, 0x76, 0x05, 0xe2, 0xc1, 0x7e, 0x20,
      0x75, 0x68, 0xd5, 0x98, 0x2f, 0xde, 0x06, 0xb3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hammerhead_interfaces__msg__Setpoint__TYPE_NAME[] = "hammerhead_interfaces/msg/Setpoint";

// Define type names, field names, and default values
static char hammerhead_interfaces__msg__Setpoint__FIELD_NAME__setpoints[] = "setpoints";
static char hammerhead_interfaces__msg__Setpoint__FIELD_NAME__joy[] = "joy";

static rosidl_runtime_c__type_description__Field hammerhead_interfaces__msg__Setpoint__FIELDS[] = {
  {
    {hammerhead_interfaces__msg__Setpoint__FIELD_NAME__setpoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__Setpoint__FIELD_NAME__joy, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hammerhead_interfaces__msg__Setpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hammerhead_interfaces__msg__Setpoint__TYPE_NAME, 34, 34},
      {hammerhead_interfaces__msg__Setpoint__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] setpoints\n"
  "int16[] joy\n"
  "# 0 - x accel\n"
  "# 1 - y accel\n"
  "# 2 - z depth\n"
  "# 3 - roll\n"
  "# 4 - pitch\n"
  "# 5 - yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hammerhead_interfaces__msg__Setpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hammerhead_interfaces__msg__Setpoint__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hammerhead_interfaces__msg__Setpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hammerhead_interfaces__msg__Setpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
