// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/thruster_speeds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__ThrusterSpeeds__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x98, 0x13, 0xb1, 0x2d, 0x41, 0x58, 0xdb,
      0xf6, 0xbd, 0xb8, 0xe2, 0x8c, 0xf2, 0x66, 0x28,
      0x81, 0xce, 0x29, 0xbc, 0xa5, 0x86, 0x75, 0xb5,
      0xb0, 0x69, 0xaf, 0xb4, 0x79, 0x5a, 0x46, 0x91,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char makara_interfaces__msg__ThrusterSpeeds__TYPE_NAME[] = "makara_interfaces/msg/ThrusterSpeeds";

// Define type names, field names, and default values
static char makara_interfaces__msg__ThrusterSpeeds__FIELD_NAME__data[] = "data";
static char makara_interfaces__msg__ThrusterSpeeds__FIELD_NAME__reverse[] = "reverse";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__ThrusterSpeeds__FIELDS[] = {
  {
    {makara_interfaces__msg__ThrusterSpeeds__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__ThrusterSpeeds__FIELD_NAME__reverse, 7, 7},
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
makara_interfaces__msg__ThrusterSpeeds__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__ThrusterSpeeds__TYPE_NAME, 36, 36},
      {makara_interfaces__msg__ThrusterSpeeds__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16[] data\n"
  "int16[] reverse";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
makara_interfaces__msg__ThrusterSpeeds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__ThrusterSpeeds__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__ThrusterSpeeds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__ThrusterSpeeds__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
