// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from svan_msgs:msg/ImuData.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__IMU_DATA__TRAITS_HPP_
#define SVAN_MSGS__MSG__DETAIL__IMU_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "svan_msgs/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'base_orientation'
// Member 'base_orientation_uncertainty'
#include "svan_msgs/msg/detail/euler_xyz__traits.hpp"
// Member 'angular_rate'
// Member 'angular_rate_bias'
// Member 'angular_rate_bias_uncertainty'
// Member 'acceleration'
#include "svan_msgs/msg/detail/position__traits.hpp"

namespace svan_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuData & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_orientation
  {
    out << "base_orientation: ";
    to_flow_style_yaml(msg.base_orientation, out);
    out << ", ";
  }

  // member: angular_rate
  {
    out << "angular_rate: ";
    to_flow_style_yaml(msg.angular_rate, out);
    out << ", ";
  }

  // member: angular_rate_bias
  {
    out << "angular_rate_bias: ";
    to_flow_style_yaml(msg.angular_rate_bias, out);
    out << ", ";
  }

  // member: angular_rate_bias_uncertainty
  {
    out << "angular_rate_bias_uncertainty: ";
    to_flow_style_yaml(msg.angular_rate_bias_uncertainty, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: base_orientation_uncertainty
  {
    out << "base_orientation_uncertainty: ";
    to_flow_style_yaml(msg.base_orientation_uncertainty, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_orientation:\n";
    to_block_style_yaml(msg.base_orientation, out, indentation + 2);
  }

  // member: angular_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate:\n";
    to_block_style_yaml(msg.angular_rate, out, indentation + 2);
  }

  // member: angular_rate_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate_bias:\n";
    to_block_style_yaml(msg.angular_rate_bias, out, indentation + 2);
  }

  // member: angular_rate_bias_uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate_bias_uncertainty:\n";
    to_block_style_yaml(msg.angular_rate_bias_uncertainty, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: base_orientation_uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_orientation_uncertainty:\n";
    to_block_style_yaml(msg.base_orientation_uncertainty, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuData & msg, bool use_flow_style = false)
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
  const svan_msgs::msg::ImuData & msg,
  std::ostream & out, size_t indentation = 0)
{
  svan_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use svan_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const svan_msgs::msg::ImuData & msg)
{
  return svan_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<svan_msgs::msg::ImuData>()
{
  return "svan_msgs::msg::ImuData";
}

template<>
inline const char * name<svan_msgs::msg::ImuData>()
{
  return "svan_msgs/msg/ImuData";
}

template<>
struct has_fixed_size<svan_msgs::msg::ImuData>
  : std::integral_constant<bool, has_fixed_size<svan_msgs::msg::EulerXYZ>::value && has_fixed_size<svan_msgs::msg::Position>::value> {};

template<>
struct has_bounded_size<svan_msgs::msg::ImuData>
  : std::integral_constant<bool, has_bounded_size<svan_msgs::msg::EulerXYZ>::value && has_bounded_size<svan_msgs::msg::Position>::value> {};

template<>
struct is_message<svan_msgs::msg::ImuData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SVAN_MSGS__MSG__DETAIL__IMU_DATA__TRAITS_HPP_
