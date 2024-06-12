// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from svan_msgs:msg/MotorGainMultiplier.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__TRAITS_HPP_
#define SVAN_MSGS__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "svan_msgs/msg/detail/motor_gain_multiplier__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace svan_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorGainMultiplier & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp_scale
  {
    if (msg.kp_scale.size() == 0) {
      out << "kp_scale: []";
    } else {
      out << "kp_scale: [";
      size_t pending_items = msg.kp_scale.size();
      for (auto item : msg.kp_scale) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kd_scale
  {
    if (msg.kd_scale.size() == 0) {
      out << "kd_scale: []";
    } else {
      out << "kd_scale: [";
      size_t pending_items = msg.kd_scale.size();
      for (auto item : msg.kd_scale) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorGainMultiplier & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kp_scale.size() == 0) {
      out << "kp_scale: []\n";
    } else {
      out << "kp_scale:\n";
      for (auto item : msg.kp_scale) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kd_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kd_scale.size() == 0) {
      out << "kd_scale: []\n";
    } else {
      out << "kd_scale:\n";
      for (auto item : msg.kd_scale) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorGainMultiplier & msg, bool use_flow_style = false)
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
  const svan_msgs::msg::MotorGainMultiplier & msg,
  std::ostream & out, size_t indentation = 0)
{
  svan_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use svan_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const svan_msgs::msg::MotorGainMultiplier & msg)
{
  return svan_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<svan_msgs::msg::MotorGainMultiplier>()
{
  return "svan_msgs::msg::MotorGainMultiplier";
}

template<>
inline const char * name<svan_msgs::msg::MotorGainMultiplier>()
{
  return "svan_msgs/msg/MotorGainMultiplier";
}

template<>
struct has_fixed_size<svan_msgs::msg::MotorGainMultiplier>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<svan_msgs::msg::MotorGainMultiplier>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<svan_msgs::msg::MotorGainMultiplier>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SVAN_MSGS__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__TRAITS_HPP_
