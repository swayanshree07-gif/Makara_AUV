// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from makara_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "makara_interfaces/msg/detail/move_cmds__rosidl_typesupport_introspection_c.h"
#include "makara_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "makara_interfaces/msg/detail/move_cmds__functions.h"
#include "makara_interfaces/msg/detail/move_cmds__struct.h"


// Include directives for member types
// Member `list`
#include "makara_interfaces/msg/move_cmd.h"
// Member `list`
#include "makara_interfaces/msg/detail/move_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  makara_interfaces__msg__MoveCmds__init(message_memory);
}

void makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_fini_function(void * message_memory)
{
  makara_interfaces__msg__MoveCmds__fini(message_memory);
}

size_t makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__size_function__MoveCmds__list(
  const void * untyped_member)
{
  const makara_interfaces__msg__MoveCmd__Sequence * member =
    (const makara_interfaces__msg__MoveCmd__Sequence *)(untyped_member);
  return member->size;
}

const void * makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_const_function__MoveCmds__list(
  const void * untyped_member, size_t index)
{
  const makara_interfaces__msg__MoveCmd__Sequence * member =
    (const makara_interfaces__msg__MoveCmd__Sequence *)(untyped_member);
  return &member->data[index];
}

void * makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_function__MoveCmds__list(
  void * untyped_member, size_t index)
{
  makara_interfaces__msg__MoveCmd__Sequence * member =
    (makara_interfaces__msg__MoveCmd__Sequence *)(untyped_member);
  return &member->data[index];
}

void makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__fetch_function__MoveCmds__list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const makara_interfaces__msg__MoveCmd * item =
    ((const makara_interfaces__msg__MoveCmd *)
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_const_function__MoveCmds__list(untyped_member, index));
  makara_interfaces__msg__MoveCmd * value =
    (makara_interfaces__msg__MoveCmd *)(untyped_value);
  *value = *item;
}

void makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__assign_function__MoveCmds__list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  makara_interfaces__msg__MoveCmd * item =
    ((makara_interfaces__msg__MoveCmd *)
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_function__MoveCmds__list(untyped_member, index));
  const makara_interfaces__msg__MoveCmd * value =
    (const makara_interfaces__msg__MoveCmd *)(untyped_value);
  *item = *value;
}

bool makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__resize_function__MoveCmds__list(
  void * untyped_member, size_t size)
{
  makara_interfaces__msg__MoveCmd__Sequence * member =
    (makara_interfaces__msg__MoveCmd__Sequence *)(untyped_member);
  makara_interfaces__msg__MoveCmd__Sequence__fini(member);
  return makara_interfaces__msg__MoveCmd__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_member_array[2] = {
  {
    "len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__MoveCmds, len),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__MoveCmds, list),  // bytes offset in struct
    NULL,  // default value
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__size_function__MoveCmds__list,  // size() function pointer
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_const_function__MoveCmds__list,  // get_const(index) function pointer
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_function__MoveCmds__list,  // get(index) function pointer
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__fetch_function__MoveCmds__list,  // fetch(index, &value) function pointer
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__assign_function__MoveCmds__list,  // assign(index, value) function pointer
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__resize_function__MoveCmds__list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_members = {
  "makara_interfaces__msg",  // message namespace
  "MoveCmds",  // message name
  2,  // number of fields
  sizeof(makara_interfaces__msg__MoveCmds),
  false,  // has_any_key_member_
  makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_member_array,  // message members
  makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_init_function,  // function to initialize message memory (memory has to be allocated)
  makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_type_support_handle = {
  0,
  &makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_members,
  get_message_typesupport_handle_function,
  &makara_interfaces__msg__MoveCmds__get_type_hash,
  &makara_interfaces__msg__MoveCmds__get_type_description,
  &makara_interfaces__msg__MoveCmds__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_makara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, makara_interfaces, msg, MoveCmds)() {
  makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, makara_interfaces, msg, MoveCmd)();
  if (!makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_type_support_handle.typesupport_identifier) {
    makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &makara_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
