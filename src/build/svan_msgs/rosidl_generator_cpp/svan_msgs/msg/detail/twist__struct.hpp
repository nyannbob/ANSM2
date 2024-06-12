// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from svan_msgs:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef SVAN_MSGS__MSG__DETAIL__TWIST__STRUCT_HPP_
#define SVAN_MSGS__MSG__DETAIL__TWIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "svan_msgs/msg/detail/position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__svan_msgs__msg__Twist __attribute__((deprecated))
#else
# define DEPRECATED__svan_msgs__msg__Twist __declspec(deprecated)
#endif

namespace svan_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Twist_
{
  using Type = Twist_<ContainerAllocator>;

  explicit Twist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_init),
    angular(_init)
  {
    (void)_init;
  }

  explicit Twist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_alloc, _init),
    angular(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _linear_type =
    svan_msgs::msg::Position_<ContainerAllocator>;
  _linear_type linear;
  using _angular_type =
    svan_msgs::msg::Position_<ContainerAllocator>;
  _angular_type angular;

  // setters for named parameter idiom
  Type & set__linear(
    const svan_msgs::msg::Position_<ContainerAllocator> & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__angular(
    const svan_msgs::msg::Position_<ContainerAllocator> & _arg)
  {
    this->angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    svan_msgs::msg::Twist_<ContainerAllocator> *;
  using ConstRawPtr =
    const svan_msgs::msg::Twist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<svan_msgs::msg::Twist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<svan_msgs::msg::Twist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::Twist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::Twist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      svan_msgs::msg::Twist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<svan_msgs::msg::Twist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<svan_msgs::msg::Twist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<svan_msgs::msg::Twist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__svan_msgs__msg__Twist
    std::shared_ptr<svan_msgs::msg::Twist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__svan_msgs__msg__Twist
    std::shared_ptr<svan_msgs::msg::Twist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Twist_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const Twist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Twist_

// alias to use template instance with default allocator
using Twist =
  svan_msgs::msg::Twist_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace svan_msgs

#endif  // SVAN_MSGS__MSG__DETAIL__TWIST__STRUCT_HPP_
