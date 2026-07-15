// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/pid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__PID__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0x94, 0x89, 0x45, 0xf4, 0x14, 0xe7, 0xdc,
      0xb8, 0x39, 0xf7, 0x31, 0xad, 0xe8, 0xd0, 0xc7,
      0xb1, 0x3f, 0xee, 0x11, 0x55, 0xf8, 0xa7, 0x69,
      0x07, 0x8c, 0x69, 0x3d, 0x55, 0xd1, 0xcc, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char makara_interfaces__msg__PID__TYPE_NAME[] = "makara_interfaces/msg/PID";

// Define type names, field names, and default values
static char makara_interfaces__msg__PID__FIELD_NAME__kp[] = "kp";
static char makara_interfaces__msg__PID__FIELD_NAME__ki[] = "ki";
static char makara_interfaces__msg__PID__FIELD_NAME__kd[] = "kd";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__PID__FIELDS[] = {
  {
    {makara_interfaces__msg__PID__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__PID__FIELD_NAME__ki, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__PID__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
makara_interfaces__msg__PID__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__PID__TYPE_NAME, 25, 25},
      {makara_interfaces__msg__PID__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] kp\n"
  "float32[] ki\n"
  "float32[] kd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
makara_interfaces__msg__PID__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__PID__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__PID__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__PID__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
