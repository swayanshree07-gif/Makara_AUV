// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hammerhead_interfaces:msg/InsVel.idl
// generated code does not contain a copyright notice

#include "hammerhead_interfaces/msg/detail/ins_vel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_type_hash_t *
hammerhead_interfaces__msg__InsVel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0xce, 0x5d, 0xc4, 0xd7, 0x22, 0x83, 0x5e,
      0x32, 0xd4, 0x9b, 0x7a, 0x20, 0xdc, 0x15, 0xfa,
      0x4f, 0x89, 0x6b, 0xa0, 0x61, 0xb3, 0x70, 0x9a,
      0xc4, 0x86, 0xd0, 0xb0, 0x01, 0x61, 0xf9, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hammerhead_interfaces__msg__InsVel__TYPE_NAME[] = "hammerhead_interfaces/msg/InsVel";

// Define type names, field names, and default values
static char hammerhead_interfaces__msg__InsVel__FIELD_NAME__vel[] = "vel";

static rosidl_runtime_c__type_description__Field hammerhead_interfaces__msg__InsVel__FIELDS[] = {
  {
    {hammerhead_interfaces__msg__InsVel__FIELD_NAME__vel, 3, 3},
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
hammerhead_interfaces__msg__InsVel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hammerhead_interfaces__msg__InsVel__TYPE_NAME, 32, 32},
      {hammerhead_interfaces__msg__InsVel__FIELDS, 1, 1},
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
hammerhead_interfaces__msg__InsVel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hammerhead_interfaces__msg__InsVel__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hammerhead_interfaces__msg__InsVel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hammerhead_interfaces__msg__InsVel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
