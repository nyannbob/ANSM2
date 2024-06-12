// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from svan_msgs:msg/PoseEuler.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__POSE_EULER__TRAITS_HPP_
#define SVAN_MSGS__MSG__DETAIL__POSE_EULER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "svan_msgs/msg/detail/pose_euler__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "svan_msgs/msg/detail/position__traits.hpp"
// Member 'orientation'
#include "svan_msgs/msg/detail/euler_xyz__traits.hpp"

namespace svan_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseEuler & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseEuler & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseEuler & msg, bool use_flow_style = false)
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
  const svan_msgs::msg::PoseEuler & msg,
  std::ostream & out, size_t indentation = 0)
{
  svan_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use svan_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const svan_msgs::msg::PoseEuler & msg)
{
  return svan_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<svan_msgs::msg::PoseEuler>()
{
  return "svan_msgs::msg::PoseEuler";
}

template<>
inline const char * name<svan_msgs::msg::PoseEuler>()
{
  return "svan_msgs/msg/PoseEuler";
}

template<>
struct has_fixed_size<svan_msgs::msg::PoseEuler>
  : std::integral_constant<bool, has_fixed_size<svan_msgs::msg::EulerXYZ>::value && has_fixed_size<svan_msgs::msg::Position>::value> {};

template<>
struct has_bounded_size<svan_msgs::msg::PoseEuler>
  : std::integral_constant<bool, has_bounded_size<svan_msgs::msg::EulerXYZ>::value && has_bounded_size<svan_msgs::msg::Position>::value> {};

template<>
struct is_message<svan_msgs::msg::PoseEuler>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SVAN_MSGS__MSG__DETAIL__POSE_EULER__TRAITS_HPP_
