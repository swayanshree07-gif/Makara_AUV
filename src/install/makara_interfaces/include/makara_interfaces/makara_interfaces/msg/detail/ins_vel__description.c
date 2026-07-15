// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/InsVel.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/ins_vel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__InsVel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0xf0, 0xe2, 0x95, 0x6b, 0xc6, 0x2a, 0x23,
      0x34, 0xae, 0x42, 0x17, 0xe5, 0x34, 0xf0, 0x35,
      0x93, 0x42, 0x73, 0xe7, 0xa4, 0x53, 0x70, 0xb8,
      0xc6, 0x9a, 0xc2, 0x1c, 0xb4, 0x49, 0xaa, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char makara_interfaces__msg__InsVel__TYPE_NAME[] = "makara_interfaces/msg/InsVel";

// Define type names, field names, and default values
static char makara_interfaces__msg__InsVel__FIELD_NAME__vel[] = "vel";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__InsVel__FIELDS[] = {
  {
    {makara_interfaces__msg__InsVel__FIELD_NAME__vel, 3, 3},
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
makara_interfaces__msg__InsVel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__InsVel__TYPE_NAME, 28, 28},
      {makara_interfaces__msg__InsVel__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] vel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
makara_interfaces__msg__InsVel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__InsVel__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__InsVel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__InsVel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
