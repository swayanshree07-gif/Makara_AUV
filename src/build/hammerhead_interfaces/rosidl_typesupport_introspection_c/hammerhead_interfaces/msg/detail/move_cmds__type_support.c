// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hammerhead_interfaces:msg/MoveCmds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hammerhead_interfaces/msg/detail/move_cmds__rosidl_typesupport_introspection_c.h"
#include "hammerhead_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hammerhead_interfaces/msg/detail/move_cmds__functions.h"
#include "hammerhead_interfaces/msg/detail/move_cmds__struct.h"


// Include directives for member types
// Member `list`
#include "hammerhead_interfaces/msg/move_cmd.h"
// Member `list`
#include "hammerhead_interfaces/msg/detail/move_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hammerhead_interfaces__msg__MoveCmds__init(message_memory);
}

void hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_fini_function(void * message_memory)
{
  hammerhead_interfaces__msg__MoveCmds__fini(message_memory);
}

size_t hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__size_function__MoveCmds__list(
  const void * untyped_member)
{
  const hammerhead_interfaces__msg__MoveCmd__Sequence * member =
    (const hammerhead_interfaces__msg__MoveCmd__Sequence *)(untyped_member);
  return member->size;
}

const void * hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_const_function__MoveCmds__list(
  const void * untyped_member, size_t index)
{
  const hammerhead_interfaces__msg__MoveCmd__Sequence * member =
    (const hammerhead_interfaces__msg__MoveCmd__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_function__MoveCmds__list(
  void * untyped_member, size_t index)
{
  hammerhead_interfaces__msg__MoveCmd__Sequence * member =
    (hammerhead_interfaces__msg__MoveCmd__Sequence *)(untyped_member);
  return &member->data[index];
}

void hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__fetch_function__MoveCmds__list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hammerhead_interfaces__msg__MoveCmd * item =
    ((const hammerhead_interfaces__msg__MoveCmd *)
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_const_function__MoveCmds__list(untyped_member, index));
  hammerhead_interfaces__msg__MoveCmd * value =
    (hammerhead_interfaces__msg__MoveCmd *)(untyped_value);
  *value = *item;
}

void hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__assign_function__MoveCmds__list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hammerhead_interfaces__msg__MoveCmd * item =
    ((hammerhead_interfaces__msg__MoveCmd *)
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_function__MoveCmds__list(untyped_member, index));
  const hammerhead_interfaces__msg__MoveCmd * value =
    (const hammerhead_interfaces__msg__MoveCmd *)(untyped_value);
  *item = *value;
}

bool hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__resize_function__MoveCmds__list(
  void * untyped_member, size_t size)
{
  hammerhead_interfaces__msg__MoveCmd__Sequence * member =
    (hammerhead_interfaces__msg__MoveCmd__Sequence *)(untyped_member);
  hammerhead_interfaces__msg__MoveCmd__Sequence__fini(member);
  return hammerhead_interfaces__msg__MoveCmd__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_member_array[2] = {
  {
    "len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hammerhead_interfaces__msg__MoveCmds, len),  // bytes offset in struct
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
    offsetof(hammerhead_interfaces__msg__MoveCmds, list),  // bytes offset in struct
    NULL,  // default value
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__size_function__MoveCmds__list,  // size() function pointer
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_const_function__MoveCmds__list,  // get_const(index) function pointer
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__get_function__MoveCmds__list,  // get(index) function pointer
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__fetch_function__MoveCmds__list,  // fetch(index, &value) function pointer
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__assign_function__MoveCmds__list,  // assign(index, value) function pointer
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__resize_function__MoveCmds__list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_members = {
  "hammerhead_interfaces__msg",  // message namespace
  "MoveCmds",  // message name
  2,  // number of fields
  sizeof(hammerhead_interfaces__msg__MoveCmds),
  false,  // has_any_key_member_
  hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_member_array,  // message members
  hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_init_function,  // function to initialize message memory (memory has to be allocated)
  hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_type_support_handle = {
  0,
  &hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_members,
  get_message_typesupport_handle_function,
  &hammerhead_interfaces__msg__MoveCmds__get_type_hash,
  &hammerhead_interfaces__msg__MoveCmds__get_type_description,
  &hammerhead_interfaces__msg__MoveCmds__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hammerhead_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hammerhead_interfaces, msg, MoveCmds)() {
  hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hammerhead_interfaces, msg, MoveCmd)();
  if (!hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_type_support_handle.typesupport_identifier) {
    hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hammerhead_interfaces__msg__MoveCmds__rosidl_typesupport_introspection_c__MoveCmds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
