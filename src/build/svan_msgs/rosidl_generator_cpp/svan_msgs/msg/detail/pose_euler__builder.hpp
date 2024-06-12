// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from svan_msgs:msg/PoseEuler.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__POSE_EULER__BUILDER_HPP_
#define SVAN_MSGS__MSG__DETAIL__POSE_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "svan_msgs/msg/detail/pose_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace svan_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseEuler_orientation
{
public:
  explicit Init_PoseEuler_orientation(::svan_msgs::msg::PoseEuler & msg)
  : msg_(msg)
  {}
  ::svan_msgs::msg::PoseEuler orientation(::svan_msgs::msg::PoseEuler::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::svan_msgs::msg::PoseEuler msg_;
};

class Init_PoseEuler_position
{
public:
  Init_PoseEuler_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseEuler_orientation position(::svan_msgs::msg::PoseEuler::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PoseEuler_orientation(msg_);
  }

private:
  ::svan_msgs::msg::PoseEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::svan_msgs::msg::PoseEuler>()
{
  return svan_msgs::msg::builder::Init_PoseEuler_position();
}

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__POSE_EULER__BUILDER_HPP_
