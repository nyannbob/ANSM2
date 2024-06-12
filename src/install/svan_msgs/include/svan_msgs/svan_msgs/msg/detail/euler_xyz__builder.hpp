// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from svan_msgs:msg/EulerXYZ.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__EULER_XYZ__BUILDER_HPP_
#define SVAN_MSGS__MSG__DETAIL__EULER_XYZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "svan_msgs/msg/detail/euler_xyz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace svan_msgs
{

namespace msg
{

namespace builder
{

class Init_EulerXYZ_yaw
{
public:
  explicit Init_EulerXYZ_yaw(::svan_msgs::msg::EulerXYZ & msg)
  : msg_(msg)
  {}
  ::svan_msgs::msg::EulerXYZ yaw(::svan_msgs::msg::EulerXYZ::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::svan_msgs::msg::EulerXYZ msg_;
};

class Init_EulerXYZ_pitch
{
public:
  explicit Init_EulerXYZ_pitch(::svan_msgs::msg::EulerXYZ & msg)
  : msg_(msg)
  {}
  Init_EulerXYZ_yaw pitch(::svan_msgs::msg::EulerXYZ::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EulerXYZ_yaw(msg_);
  }

private:
  ::svan_msgs::msg::EulerXYZ msg_;
};

class Init_EulerXYZ_roll
{
public:
  Init_EulerXYZ_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EulerXYZ_pitch roll(::svan_msgs::msg::EulerXYZ::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_EulerXYZ_pitch(msg_);
  }

private:
  ::svan_msgs::msg::EulerXYZ msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::svan_msgs::msg::EulerXYZ>()
{
  return svan_msgs::msg::builder::Init_EulerXYZ_roll();
}

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__EULER_XYZ__BUILDER_HPP_
