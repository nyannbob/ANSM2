// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from svan_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
#define SVAN_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "svan_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace svan_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: gait_id
  {
    out << "gait_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_id, out);
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration
  {
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []";
    } else {
      out << "acceleration: [";
      size_t pending_items = msg.acceleration.size();
      for (auto item : msg.acceleration) {
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
  const Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gait_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
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

inline std::string to_yaml(const Trajectory & msg, bool use_flow_style = false)
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
  const svan_msgs::msg::Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  svan_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use svan_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const svan_msgs::msg::Trajectory & msg)
{
  return svan_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<svan_msgs::msg::Trajectory>()
{
  return "svan_msgs::msg::Trajectory";
}

template<>
inline const char * name<svan_msgs::msg::Trajectory>()
{
  return "svan_msgs/msg/Trajectory";
}

template<>
struct has_fixed_size<svan_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<svan_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<svan_msgs::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SVAN_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
