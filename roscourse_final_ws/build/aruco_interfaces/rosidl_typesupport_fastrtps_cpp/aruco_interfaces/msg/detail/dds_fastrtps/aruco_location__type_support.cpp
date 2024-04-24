// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from aruco_interfaces:msg/ArucoLocation.idl
// generated code does not contain a copyright notice
#include "aruco_interfaces/msg/detail/aruco_location__rosidl_typesupport_fastrtps_cpp.hpp"
#include "aruco_interfaces/msg/detail/aruco_location__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace aruco_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_interfaces
cdr_serialize(
  const aruco_interfaces::msg::ArucoLocation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: aruco_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.aruco_pose,
    cdr);
  // Member: aruco_id
  cdr << ros_message.aruco_id;
  // Member: aruco_found
  cdr << (ros_message.aruco_found ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aruco_interfaces::msg::ArucoLocation & ros_message)
{
  // Member: aruco_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.aruco_pose);

  // Member: aruco_id
  cdr >> ros_message.aruco_id;

  // Member: aruco_found
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aruco_found = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_interfaces
get_serialized_size(
  const aruco_interfaces::msg::ArucoLocation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: aruco_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.aruco_pose, current_alignment);
  // Member: aruco_id
  {
    size_t item_size = sizeof(ros_message.aruco_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aruco_found
  {
    size_t item_size = sizeof(ros_message.aruco_found);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_interfaces
max_serialized_size_ArucoLocation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: aruco_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        full_bounded, current_alignment);
    }
  }

  // Member: aruco_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: aruco_found
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ArucoLocation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const aruco_interfaces::msg::ArucoLocation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArucoLocation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<aruco_interfaces::msg::ArucoLocation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArucoLocation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const aruco_interfaces::msg::ArucoLocation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArucoLocation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ArucoLocation(full_bounded, 0);
}

static message_type_support_callbacks_t _ArucoLocation__callbacks = {
  "aruco_interfaces::msg",
  "ArucoLocation",
  _ArucoLocation__cdr_serialize,
  _ArucoLocation__cdr_deserialize,
  _ArucoLocation__get_serialized_size,
  _ArucoLocation__max_serialized_size
};

static rosidl_message_type_support_t _ArucoLocation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArucoLocation__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aruco_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_aruco_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_interfaces::msg::ArucoLocation>()
{
  return &aruco_interfaces::msg::typesupport_fastrtps_cpp::_ArucoLocation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aruco_interfaces, msg, ArucoLocation)() {
  return &aruco_interfaces::msg::typesupport_fastrtps_cpp::_ArucoLocation__handle;
}

#ifdef __cplusplus
}
#endif
