// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from svan_msgs:msg/ImuData.idl
// generated code does not contain a copyright notice
#include "svan_msgs/msg/detail/imu_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "svan_msgs/msg/detail/imu_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace svan_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const svan_msgs::msg::EulerXYZ &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  svan_msgs::msg::EulerXYZ &);
size_t get_serialized_size(
  const svan_msgs::msg::EulerXYZ &,
  size_t current_alignment);
size_t
max_serialized_size_EulerXYZ(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace svan_msgs

namespace svan_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const svan_msgs::msg::Position &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  svan_msgs::msg::Position &);
size_t get_serialized_size(
  const svan_msgs::msg::Position &,
  size_t current_alignment);
size_t
max_serialized_size_Position(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace svan_msgs

// functions for svan_msgs::msg::Position already declared above

// functions for svan_msgs::msg::Position already declared above

// functions for svan_msgs::msg::Position already declared above

// functions for svan_msgs::msg::EulerXYZ already declared above


namespace svan_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_svan_msgs
cdr_serialize(
  const svan_msgs::msg::ImuData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base_orientation
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.base_orientation,
    cdr);
  // Member: angular_rate
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.angular_rate,
    cdr);
  // Member: angular_rate_bias
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.angular_rate_bias,
    cdr);
  // Member: angular_rate_bias_uncertainty
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.angular_rate_bias_uncertainty,
    cdr);
  // Member: acceleration
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.acceleration,
    cdr);
  // Member: base_orientation_uncertainty
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.base_orientation_uncertainty,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_svan_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  svan_msgs::msg::ImuData & ros_message)
{
  // Member: base_orientation
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.base_orientation);

  // Member: angular_rate
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.angular_rate);

  // Member: angular_rate_bias
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.angular_rate_bias);

  // Member: angular_rate_bias_uncertainty
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.angular_rate_bias_uncertainty);

  // Member: acceleration
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.acceleration);

  // Member: base_orientation_uncertainty
  svan_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.base_orientation_uncertainty);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_svan_msgs
get_serialized_size(
  const svan_msgs::msg::ImuData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base_orientation

  current_alignment +=
    svan_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.base_orientation, current_alignment);
  // Member: angular_rate

  current_alignment +=
    svan_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.angular_rate, current_alignment);
  // Member: angular_rate_bias

  current_alignment +=
    svan_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.angular_rate_bias, current_alignment);
  // Member: angular_rate_bias_uncertainty

  current_alignment +=
    svan_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.angular_rate_bias_uncertainty, current_alignment);
  // Member: acceleration

  current_alignment +=
    svan_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.acceleration, current_alignment);
  // Member: base_orientation_uncertainty

  current_alignment +=
    svan_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.base_orientation_uncertainty, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_svan_msgs
max_serialized_size_ImuData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: base_orientation
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        svan_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EulerXYZ(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: angular_rate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        svan_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Position(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: angular_rate_bias
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        svan_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Position(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: angular_rate_bias_uncertainty
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        svan_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Position(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: acceleration
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        svan_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Position(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: base_orientation_uncertainty
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        svan_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EulerXYZ(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = svan_msgs::msg::ImuData;
    is_plain =
      (
      offsetof(DataType, base_orientation_uncertainty) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImuData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const svan_msgs::msg::ImuData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImuData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<svan_msgs::msg::ImuData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImuData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const svan_msgs::msg::ImuData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImuData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImuData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImuData__callbacks = {
  "svan_msgs::msg",
  "ImuData",
  _ImuData__cdr_serialize,
  _ImuData__cdr_deserialize,
  _ImuData__get_serialized_size,
  _ImuData__max_serialized_size
};

static rosidl_message_type_support_t _ImuData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImuData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace svan_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_svan_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<svan_msgs::msg::ImuData>()
{
  return &svan_msgs::msg::typesupport_fastrtps_cpp::_ImuData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, svan_msgs, msg, ImuData)() {
  return &svan_msgs::msg::typesupport_fastrtps_cpp::_ImuData__handle;
}

#ifdef __cplusplus
}
#endif
