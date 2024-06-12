// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from svan_msgs:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__TWIST__TRAITS_HPP_
#define SVAN_MSGS__MSG__DETAIL__TWIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "svan_msgs/msg/detail/twist__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "svan_msgs/msg/detail/position__traits.hpp"

namespace svan_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Twist & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear
  {
    out << "linear: ";
    to_flow_style_yaml(msg.linear, out);
    out << ", ";
  }

  // member: angular
  {
    out << "angular: ";
    to_flow_style_yaml(msg.angular, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Twist & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear:\n";
    to_block_style_yaml(msg.linear, out, indentation + 2);
  }

  // member: angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular:\n";
    to_block_style_yaml(msg.angular, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Twist & msg, bool use_flow_style = false)
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
  const svan_msgs::msg::Twist & msg,
  std::ostream & out, size_t indentation = 0)
{
  svan_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use svan_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const svan_msgs::msg::Twist & msg)
{
  return svan_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<svan_msgs::msg::Twist>()
{
  return "svan_msgs::msg::Twist";
}

template<>
inline const char * name<svan_msgs::msg::Twist>()
{
  return "svan_msgs/msg/Twist";
}

template<>
struct has_fixed_size<svan_msgs::msg::Twist>
  : std::integral_constant<bool, has_fixed_size<svan_msgs::msg::Position>::value> {};

template<>
struct has_bounded_size<svan_msgs::msg::Twist>
  : std::integral_constant<bool, has_bounded_size<svan_msgs::msg::Position>::value> {};

template<>
struct is_message<svan_msgs::msg::Twist>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SVAN_MSGS__MSG__DETAIL__TWIST__TRAITS_HPP_
