// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hammerhead_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

#include "hammerhead_interfaces/msg/detail/thruster_speeds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_type_hash_t *
hammerhead_interfaces__msg__ThrusterSpeeds__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0xc0, 0xcd, 0x49, 0x6a, 0xb6, 0xef, 0x0d,
      0xd0, 0x0e, 0xbf, 0xfc, 0x46, 0xec, 0xe4, 0xbf,
      0x29, 0x24, 0x9d, 0x54, 0x37, 0xfc, 0xb1, 0xda,
      0x5d, 0xee, 0x85, 0x49, 0xec, 0x0e, 0xbc, 0x2a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hammerhead_interfaces__msg__ThrusterSpeeds__TYPE_NAME[] = "hammerhead_interfaces/msg/ThrusterSpeeds";

// Define type names, field names, and default values
static char hammerhead_interfaces__msg__ThrusterSpeeds__FIELD_NAME__data[] = "data";
static char hammerhead_interfaces__msg__ThrusterSpeeds__FIELD_NAME__reverse[] = "reverse";

static rosidl_runtime_c__type_description__Field hammerhead_interfaces__msg__ThrusterSpeeds__FIELDS[] = {
  {
    {hammerhead_interfaces__msg__ThrusterSpeeds__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__ThrusterSpeeds__FIELD_NAME__reverse, 7, 7},
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
hammerhead_interfaces__msg__ThrusterSpeeds__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hammerhead_interfaces__msg__ThrusterSpeeds__TYPE_NAME, 40, 40},
      {hammerhead_interfaces__msg__ThrusterSpeeds__FIELDS, 2, 2},
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
hammerhead_interfaces__msg__ThrusterSpeeds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hammerhead_interfaces__msg__ThrusterSpeeds__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hammerhead_interfaces__msg__ThrusterSpeeds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hammerhead_interfaces__msg__ThrusterSpeeds__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
