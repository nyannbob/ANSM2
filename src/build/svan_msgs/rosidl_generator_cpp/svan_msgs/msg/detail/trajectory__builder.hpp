// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from svan_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define SVAN_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "svan_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace svan_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_acceleration
{
public:
  explicit Init_Trajectory_acceleration(::svan_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::svan_msgs::msg::Trajectory acceleration(::svan_msgs::msg::Trajectory::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::svan_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_velocity
{
public:
  explicit Init_Trajectory_velocity(::svan_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_acceleration velocity(::svan_msgs::msg::Trajectory::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Trajectory_acceleration(msg_);
  }

private:
  ::svan_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_position
{
public:
  explicit Init_Trajectory_position(::svan_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_velocity position(::svan_msgs::msg::Trajectory::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Trajectory_velocity(msg_);
  }

private:
  ::svan_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_gait_id
{
public:
  Init_Trajectory_gait_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_position gait_id(::svan_msgs::msg::Trajectory::_gait_id_type arg)
  {
    msg_.gait_id = std::move(arg);
    return Init_Trajectory_position(msg_);
  }

private:
  ::svan_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::svan_msgs::msg::Trajectory>()
{
  return svan_msgs::msg::builder::Init_Trajectory_gait_id();
}

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
