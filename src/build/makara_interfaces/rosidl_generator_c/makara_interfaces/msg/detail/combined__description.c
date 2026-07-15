// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/combined__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__Combined__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0x1b, 0xcf, 0x9b, 0x94, 0xbb, 0xec, 0xf4,
      0xca, 0x29, 0xc6, 0x9f, 0x37, 0x31, 0x46, 0xa0,
      0x54, 0x62, 0xd8, 0xea, 0x1e, 0x45, 0xed, 0x3e,
      0xce, 0x32, 0xc7, 0x27, 0x64, 0x1f, 0x97, 0x65,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char makara_interfaces__msg__Combined__TYPE_NAME[] = "makara_interfaces/msg/Combined";

// Define type names, field names, and default values
static char makara_interfaces__msg__Combined__FIELD_NAME__angular[] = "angular";
static char makara_interfaces__msg__Combined__FIELD_NAME__linear[] = "linear";
static char makara_interfaces__msg__Combined__FIELD_NAME__depth[] = "depth";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__Combined__FIELDS[] = {
  {
    {makara_interfaces__msg__Combined__FIELD_NAME__angular, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__Combined__FIELD_NAME__linear, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__Combined__FIELD_NAME__depth, 5, 5},
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
makara_interfaces__msg__Combined__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__Combined__TYPE_NAME, 30, 30},
      {makara_interfaces__msg__Combined__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Roll, Pitch, Yaw\n"
  "float32[] angular\n"
  "\n"
  "# X, Y, Z\n"
  "float32[] linear\n"
  "\n"
  "float32 depth";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
makara_interfaces__msg__Combined__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__Combined__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 80, 80},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__Combined__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__Combined__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
