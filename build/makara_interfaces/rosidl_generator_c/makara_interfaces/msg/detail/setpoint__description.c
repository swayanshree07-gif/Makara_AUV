// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/Setpoint.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/setpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__Setpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x17, 0x9c, 0xda, 0x1f, 0xb4, 0x79, 0x78,
      0xd2, 0x4f, 0x3d, 0x17, 0x79, 0x4f, 0x19, 0xdf,
      0x40, 0x6f, 0x53, 0x4f, 0xa1, 0x94, 0x6f, 0x31,
      0x29, 0x75, 0xd6, 0x07, 0x62, 0x3e, 0x48, 0xd1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char makara_interfaces__msg__Setpoint__TYPE_NAME[] = "makara_interfaces/msg/Setpoint";

// Define type names, field names, and default values
static char makara_interfaces__msg__Setpoint__FIELD_NAME__setpoints[] = "setpoints";
static char makara_interfaces__msg__Setpoint__FIELD_NAME__joy[] = "joy";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__Setpoint__FIELDS[] = {
  {
    {makara_interfaces__msg__Setpoint__FIELD_NAME__setpoints, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__Setpoint__FIELD_NAME__joy, 3, 3},
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
makara_interfaces__msg__Setpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__Setpoint__TYPE_NAME, 30, 30},
      {makara_interfaces__msg__Setpoint__FIELDS, 2, 2},
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
makara_interfaces__msg__Setpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__Setpoint__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 107, 107},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__Setpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__Setpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
