// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from makara_interfaces:msg/VectorNavData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "makara_interfaces/msg/detail/vector_nav_data__rosidl_typesupport_introspection_c.h"
#include "makara_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "makara_interfaces/msg/detail/vector_nav_data__functions.h"
#include "makara_interfaces/msg/detail/vector_nav_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `orientation`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  makara_interfaces__msg__VectorNavData__init(message_memory);
}

void makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_fini_function(void * message_memory)
{
  makara_interfaces__msg__VectorNavData__fini(message_memory);
}

size_t makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__size_function__VectorNavData__orientation(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__orientation(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__orientation(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__fetch_function__VectorNavData__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__orientation(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__assign_function__VectorNavData__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__orientation(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__resize_function__VectorNavData__orientation(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__size_function__VectorNavData__acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__fetch_function__VectorNavData__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__acceleration(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__assign_function__VectorNavData__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__acceleration(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__resize_function__VectorNavData__acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__VectorNavData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__VectorNavData, orientation),  // bytes offset in struct
    NULL,  // default value
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__size_function__VectorNavData__orientation,  // size() function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__orientation,  // get_const(index) function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__orientation,  // get(index) function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__fetch_function__VectorNavData__orientation,  // fetch(index, &value) function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__assign_function__VectorNavData__orientation,  // assign(index, value) function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__resize_function__VectorNavData__orientation  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces__msg__VectorNavData, acceleration),  // bytes offset in struct
    NULL,  // default value
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__size_function__VectorNavData__acceleration,  // size() function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_const_function__VectorNavData__acceleration,  // get_const(index) function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__get_function__VectorNavData__acceleration,  // get(index) function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__fetch_function__VectorNavData__acceleration,  // fetch(index, &value) function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__assign_function__VectorNavData__acceleration,  // assign(index, value) function pointer
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__resize_function__VectorNavData__acceleration  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_members = {
  "makara_interfaces__msg",  // message namespace
  "VectorNavData",  // message name
  3,  // number of fields
  sizeof(makara_interfaces__msg__VectorNavData),
  false,  // has_any_key_member_
  makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_member_array,  // message members
  makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_init_function,  // function to initialize message memory (memory has to be allocated)
  makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_type_support_handle = {
  0,
  &makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_members,
  get_message_typesupport_handle_function,
  &makara_interfaces__msg__VectorNavData__get_type_hash,
  &makara_interfaces__msg__VectorNavData__get_type_description,
  &makara_interfaces__msg__VectorNavData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_makara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, makara_interfaces, msg, VectorNavData)() {
  makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_type_support_handle.typesupport_identifier) {
    makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &makara_interfaces__msg__VectorNavData__rosidl_typesupport_introspection_c__VectorNavData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
