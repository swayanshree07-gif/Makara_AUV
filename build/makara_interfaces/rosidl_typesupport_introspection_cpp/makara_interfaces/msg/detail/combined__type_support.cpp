// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from makara_interfaces:msg/Combined.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "makara_interfaces/msg/detail/combined__functions.h"
#include "makara_interfaces/msg/detail/combined__struct.hpp"
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

void Combined_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) makara_interfaces::msg::Combined(_init);
}

void Combined_fini_function(void * message_memory)
{
  auto typed_message = static_cast<makara_interfaces::msg::Combined *>(message_memory);
  typed_message->~Combined();
}

size_t size_function__Combined__angular(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Combined__angular(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Combined__angular(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Combined__angular(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Combined__angular(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Combined__angular(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Combined__angular(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Combined__angular(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Combined__linear(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Combined__linear(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Combined__linear(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Combined__linear(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Combined__linear(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Combined__linear(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Combined__linear(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Combined__linear(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Combined_message_member_array[3] = {
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces::msg::Combined, angular),  // bytes offset in struct
    nullptr,  // default value
    size_function__Combined__angular,  // size() function pointer
    get_const_function__Combined__angular,  // get_const(index) function pointer
    get_function__Combined__angular,  // get(index) function pointer
    fetch_function__Combined__angular,  // fetch(index, &value) function pointer
    assign_function__Combined__angular,  // assign(index, value) function pointer
    resize_function__Combined__angular  // resize(index) function pointer
  },
  {
    "linear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces::msg::Combined, linear),  // bytes offset in struct
    nullptr,  // default value
    size_function__Combined__linear,  // size() function pointer
    get_const_function__Combined__linear,  // get_const(index) function pointer
    get_function__Combined__linear,  // get(index) function pointer
    fetch_function__Combined__linear,  // fetch(index, &value) function pointer
    assign_function__Combined__linear,  // assign(index, value) function pointer
    resize_function__Combined__linear  // resize(index) function pointer
  },
  {
    "depth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(makara_interfaces::msg::Combined, depth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Combined_message_members = {
  "makara_interfaces::msg",  // message namespace
  "Combined",  // message name
  3,  // number of fields
  sizeof(makara_interfaces::msg::Combined),
  false,  // has_any_key_member_
  Combined_message_member_array,  // message members
  Combined_init_function,  // function to initialize message memory (memory has to be allocated)
  Combined_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Combined_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Combined_message_members,
  get_message_typesupport_handle_function,
  &makara_interfaces__msg__Combined__get_type_hash,
  &makara_interfaces__msg__Combined__get_type_description,
  &makara_interfaces__msg__Combined__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace makara_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<makara_interfaces::msg::Combined>()
{
  return &::makara_interfaces::msg::rosidl_typesupport_introspection_cpp::Combined_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, makara_interfaces, msg, Combined)() {
  return &::makara_interfaces::msg::rosidl_typesupport_introspection_cpp::Combined_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
