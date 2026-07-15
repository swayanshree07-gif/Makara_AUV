// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hammerhead_interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#include "hammerhead_interfaces/msg/detail/position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hammerhead_interfaces
const rosidl_type_hash_t *
hammerhead_interfaces__msg__Position__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x2e, 0x7c, 0x1f, 0x7c, 0x78, 0x9c, 0x23,
      0xcc, 0x9d, 0x31, 0x3c, 0x5e, 0x2c, 0x3d, 0xc7,
      0xd5, 0xb3, 0xe5, 0x9f, 0x21, 0xe1, 0xbe, 0xd4,
      0x59, 0xf6, 0x10, 0x9f, 0x23, 0x10, 0x9d, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hammerhead_interfaces__msg__Position__TYPE_NAME[] = "hammerhead_interfaces/msg/Position";

// Define type names, field names, and default values
static char hammerhead_interfaces__msg__Position__FIELD_NAME__x[] = "x";
static char hammerhead_interfaces__msg__Position__FIELD_NAME__y[] = "y";
static char hammerhead_interfaces__msg__Position__FIELD_NAME__z[] = "z";
static char hammerhead_interfaces__msg__Position__FIELD_NAME__roll[] = "roll";
static char hammerhead_interfaces__msg__Position__FIELD_NAME__pitch[] = "pitch";
static char hammerhead_interfaces__msg__Position__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field hammerhead_interfaces__msg__Position__FIELDS[] = {
  {
    {hammerhead_interfaces__msg__Position__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__Position__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__Position__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__Position__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__Position__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hammerhead_interfaces__msg__Position__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hammerhead_interfaces__msg__Position__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hammerhead_interfaces__msg__Position__TYPE_NAME, 34, 34},
      {hammerhead_interfaces__msg__Position__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 z\n"
  "float32 roll\n"
  "float32 pitch\n"
  "float32 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hammerhead_interfaces__msg__Position__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hammerhead_interfaces__msg__Position__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hammerhead_interfaces__msg__Position__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hammerhead_interfaces__msg__Position__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
