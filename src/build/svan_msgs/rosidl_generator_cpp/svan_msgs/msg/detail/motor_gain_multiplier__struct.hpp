// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from svan_msgs:msg/MotorGainMultiplier.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__STRUCT_HPP_
#define SVAN_MSGS__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__svan_msgs__msg__MotorGainMultiplier __attribute__((deprecated))
#else
# define DEPRECATED__svan_msgs__msg__MotorGainMultiplier __declspec(deprecated)
#endif

namespace svan_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorGainMultiplier_
{
  using Type = MotorGainMultiplier_<ContainerAllocator>;

  explicit MotorGainMultiplier_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotorGainMultiplier_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _kp_scale_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kp_scale_type kp_scale;
  using _kd_scale_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kd_scale_type kd_scale;

  // setters for named parameter idiom
  Type & set__kp_scale(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kp_scale = _arg;
    return *this;
  }
  Type & set__kd_scale(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kd_scale = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator> *;
  using ConstRawPtr =
    const svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__svan_msgs__msg__MotorGainMultiplier
    std::shared_ptr<svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__svan_msgs__msg__MotorGainMultiplier
    std::shared_ptr<svan_msgs::msg::MotorGainMultiplier_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorGainMultiplier_ & other) const
  {
    if (this->kp_scale != other.kp_scale) {
      return false;
    }
    if (this->kd_scale != other.kd_scale) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorGainMultiplier_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorGainMultiplier_

// alias to use template instance with default allocator
using MotorGainMultiplier =
  svan_msgs::msg::MotorGainMultiplier_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__STRUCT_HPP_
