// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from svan_msgs:msg/EulerXYZ.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__EULER_XYZ__TRAITS_HPP_
#define SVAN_MSGS__MSG__DETAIL__EULER_XYZ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "svan_msgs/msg/detail/euler_xyz__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace svan_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EulerXYZ & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EulerXYZ & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EulerXYZ & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace svan_msgs

namespace rosidl_generator_traits
{

[[deprecated("use svan_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const svan_msgs::msg::EulerXYZ & msg,
  std::ostream & out, size_t indentation = 0)
{
  svan_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use svan_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const svan_msgs::msg::EulerXYZ & msg)
{
  return svan_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<svan_msgs::msg::EulerXYZ>()
{
  return "svan_msgs::msg::EulerXYZ";
}

template<>
inline const char * name<svan_msgs::msg::EulerXYZ>()
{
  return "svan_msgs/msg/EulerXYZ";
}

template<>
struct has_fixed_size<svan_msgs::msg::EulerXYZ>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<svan_msgs::msg::EulerXYZ>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<svan_msgs::msg::EulerXYZ>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SVAN_MSGS__MSG__DETAIL__EULER_XYZ__TRAITS_HPP_
