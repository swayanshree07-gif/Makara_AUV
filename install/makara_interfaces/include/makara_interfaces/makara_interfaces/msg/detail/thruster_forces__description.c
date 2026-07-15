// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/ThrusterForces.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/thruster_forces__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__ThrusterForces__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0xcb, 0x99, 0x9b, 0x31, 0x15, 0x3c, 0x94,
      0x7b, 0xb6, 0x27, 0x3b, 0x24, 0x8d, 0x4d, 0x0c,
      0x0d, 0xe0, 0xd0, 0x42, 0xa9, 0x18, 0x3e, 0x6c,
      0x81, 0x1c, 0x0d, 0xe0, 0xff, 0xaa, 0x17, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char makara_interfaces__msg__ThrusterForces__TYPE_NAME[] = "makara_interfaces/msg/ThrusterForces";

// Define type names, field names, and default values
static char makara_interfaces__msg__ThrusterForces__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__ThrusterForces__FIELDS[] = {
  {
    {makara_interfaces__msg__ThrusterForces__FIELD_NAME__data, 4, 4},
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
makara_interfaces__msg__ThrusterForces__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__ThrusterForces__TYPE_NAME, 36, 36},
      {makara_interfaces__msg__ThrusterForces__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
makara_interfaces__msg__ThrusterForces__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__ThrusterForces__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__ThrusterForces__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__ThrusterForces__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
