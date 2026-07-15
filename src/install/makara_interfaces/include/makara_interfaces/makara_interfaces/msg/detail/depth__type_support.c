// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from makara_interfaces:msg/Depth.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "makara_interfaces/msg/detail/depth__rosidl_typesupport_introspection_c.h"
#include "makara_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "makara_interfaces/msg/detail/depth__functions.h"
#include "makara_interfaces/msg/detail/depth__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  makara_interfaces__msg__Depth__init(message_memory);
}

void makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_fini_function(void * message_memory)
{
  makara_interfaces__msg__Depth__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__Depth, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__Depth, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_members = {
  "makara_interfaces__msg",  // message namespace
  "Depth",  // message name
  2,  // number of fields
  sizeof(makara_interfaces__msg__Depth),
  false,  // has_any_key_member_
  makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_member_array,  // message members
  makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_init_function,  // function to initialize message memory (memory has to be allocated)
  makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_type_support_handle = {
  0,
  &makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_members,
  get_message_typesupport_handle_function,
  &makara_interfaces__msg__Depth__get_type_hash,
  &makara_interfaces__msg__Depth__get_type_description,
  &makara_interfaces__msg__Depth__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_makara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, makara_interfaces, msg, Depth)() {
  makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_type_support_handle.typesupport_identifier) {
    makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &makara_interfaces__msg__Depth__rosidl_typesupport_introspection_c__Depth_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
