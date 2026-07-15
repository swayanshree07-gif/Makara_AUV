// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from makara_interfaces:msg/ThrusterSpeeds.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "makara_interfaces/msg/detail/thruster_speeds__functions.h"
#include "makara_interfaces/msg/detail/thruster_speeds__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace makara_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ThrusterSpeeds_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) makara_interfaces::msg::ThrusterSpeeds(_init);
}

void ThrusterSpeeds_fini_function(void * message_memory)
{
  auto typed_message = static_cast<makara_interfaces::msg::ThrusterSpeeds *>(message_memory);
  typed_message->~ThrusterSpeeds();
}

size_t size_function__ThrusterSpeeds__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterSpeeds__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterSpeeds__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ThrusterSpeeds__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__ThrusterSpeeds__data(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__ThrusterSpeeds__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__ThrusterSpeeds__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__ThrusterSpeeds__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThrusterSpeeds__reverse(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterSpeeds__reverse(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterSpeeds__reverse(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ThrusterSpeeds__reverse(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__ThrusterSpeeds__reverse(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__ThrusterSpeeds__reverse(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__ThrusterSpeeds__reverse(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

void resize_function__ThrusterSpeeds__reverse(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ThrusterSpeeds_message_member_array[2] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces::msg::ThrusterSpeeds, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterSpeeds__data,  // size() function pointer
    get_const_function__ThrusterSpeeds__data,  // get_const(index) function pointer
    get_function__ThrusterSpeeds__data,  // get(index) function pointer
    fetch_function__ThrusterSpeeds__data,  // fetch(index, &value) function pointer
    assign_function__ThrusterSpeeds__data,  // assign(index, value) function pointer
    resize_function__ThrusterSpeeds__data  // resize(index) function pointer
  },
  {
    "reverse",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces::msg::ThrusterSpeeds, reverse),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterSpeeds__reverse,  // size() function pointer
    get_const_function__ThrusterSpeeds__reverse,  // get_const(index) function pointer
    get_function__ThrusterSpeeds__reverse,  // get(index) function pointer
    fetch_function__ThrusterSpeeds__reverse,  // fetch(index, &value) function pointer
    assign_function__ThrusterSpeeds__reverse,  // assign(index, value) function pointer
    resize_function__ThrusterSpeeds__reverse  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ThrusterSpeeds_message_members = {
  "makara_interfaces::msg",  // message namespace
  "ThrusterSpeeds",  // message name
  2,  // number of fields
  sizeof(makara_interfaces::msg::ThrusterSpeeds),
  false,  // has_any_key_member_
  ThrusterSpeeds_message_member_array,  // message members
  ThrusterSpeeds_init_function,  // function to initialize message memory (memory has to be allocated)
  ThrusterSpeeds_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ThrusterSpeeds_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ThrusterSpeeds_message_members,
  get_message_typesupport_handle_function,
  &makara_interfaces__msg__ThrusterSpeeds__get_type_hash,
  &makara_interfaces__msg__ThrusterSpeeds__get_type_description,
  &makara_interfaces__msg__ThrusterSpeeds__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace makara_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<makara_interfaces::msg::ThrusterSpeeds>()
{
  return &::makara_interfaces::msg::rosidl_typesupport_introspection_cpp::ThrusterSpeeds_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, makara_interfaces, msg, ThrusterSpeeds)() {
  return &::makara_interfaces::msg::rosidl_typesupport_introspection_cpp::ThrusterSpeeds_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
