// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from svan_msgs:msg/PoseEuler.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "svan_msgs/msg/detail/pose_euler__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace svan_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PoseEuler_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) svan_msgs::msg::PoseEuler(_init);
}

void PoseEuler_fini_function(void * message_memory)
{
  auto typed_message = static_cast<svan_msgs::msg::PoseEuler *>(message_memory);
  typed_message->~PoseEuler();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseEuler_message_member_array[2] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<svan_msgs::msg::Position>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svan_msgs::msg::PoseEuler, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<svan_msgs::msg::EulerXYZ>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(svan_msgs::msg::PoseEuler, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseEuler_message_members = {
  "svan_msgs::msg",  // message namespace
  "PoseEuler",  // message name
  2,  // number of fields
  sizeof(svan_msgs::msg::PoseEuler),
  PoseEuler_message_member_array,  // message members
  PoseEuler_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseEuler_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseEuler_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseEuler_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace svan_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<svan_msgs::msg::PoseEuler>()
{
  return &::svan_msgs::msg::rosidl_typesupport_introspection_cpp::PoseEuler_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, svan_msgs, msg, PoseEuler)() {
  return &::svan_msgs::msg::rosidl_typesupport_introspection_cpp::PoseEuler_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
