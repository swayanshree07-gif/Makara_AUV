// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from makara_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

#include "makara_interfaces/msg/detail/move_cmds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_makara_interfaces
const rosidl_type_hash_t *
makara_interfaces__msg__MoveCmds__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0xad, 0xd9, 0xfc, 0xcf, 0xb2, 0x7c, 0x95,
      0x00, 0x5f, 0x2e, 0xa6, 0x30, 0x11, 0x36, 0xf0,
      0xc8, 0x20, 0xda, 0x55, 0xee, 0x3c, 0x10, 0xdd,
      0xd3, 0xf6, 0xbf, 0xea, 0xbb, 0x8d, 0x40, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "makara_interfaces/msg/detail/move_cmd__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t makara_interfaces__msg__MoveCmd__EXPECTED_HASH = {1, {
    0xbf, 0x33, 0xc9, 0x37, 0xe9, 0x3e, 0x6a, 0x60,
    0x85, 0x25, 0xce, 0x1a, 0x33, 0x6f, 0x07, 0xf7,
    0xcb, 0xbf, 0xb6, 0xdf, 0x13, 0x06, 0x75, 0xdc,
    0x62, 0x4c, 0x8b, 0xfa, 0x19, 0x8d, 0x79, 0x16,
  }};
#endif

static char makara_interfaces__msg__MoveCmds__TYPE_NAME[] = "makara_interfaces/msg/MoveCmds";
static char makara_interfaces__msg__MoveCmd__TYPE_NAME[] = "makara_interfaces/msg/MoveCmd";

// Define type names, field names, and default values
static char makara_interfaces__msg__MoveCmds__FIELD_NAME__len[] = "len";
static char makara_interfaces__msg__MoveCmds__FIELD_NAME__list[] = "list";

static rosidl_runtime_c__type_description__Field makara_interfaces__msg__MoveCmds__FIELDS[] = {
  {
    {makara_interfaces__msg__MoveCmds__FIELD_NAME__len, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {makara_interfaces__msg__MoveCmds__FIELD_NAME__list, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {makara_interfaces__msg__MoveCmd__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription makara_interfaces__msg__MoveCmds__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {makara_interfaces__msg__MoveCmd__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
makara_interfaces__msg__MoveCmds__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {makara_interfaces__msg__MoveCmds__TYPE_NAME, 30, 30},
      {makara_interfaces__msg__MoveCmds__FIELDS, 2, 2},
    },
    {makara_interfaces__msg__MoveCmds__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&makara_interfaces__msg__MoveCmd__EXPECTED_HASH, makara_interfaces__msg__MoveCmd__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = makara_interfaces__msg__MoveCmd__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 len\n"
  "MoveCmd[] list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
makara_interfaces__msg__MoveCmds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {makara_interfaces__msg__MoveCmds__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
makara_interfaces__msg__MoveCmds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *makara_interfaces__msg__MoveCmds__get_individual_type_description_source(NULL),
    sources[1] = *makara_interfaces__msg__MoveCmd__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
