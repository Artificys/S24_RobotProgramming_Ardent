// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aruco_interfaces:msg/ArucoLocation.idl
// generated code does not contain a copyright notice
#include "aruco_interfaces/msg/detail/aruco_location__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aruco_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aruco_interfaces/msg/detail/aruco_location__struct.h"
#include "aruco_interfaces/msg/detail/aruco_location__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // aruco_pose

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aruco_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aruco_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_aruco_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _ArucoLocation__ros_msg_type = aruco_interfaces__msg__ArucoLocation;

static bool _ArucoLocation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArucoLocation__ros_msg_type * ros_message = static_cast<const _ArucoLocation__ros_msg_type *>(untyped_ros_message);
  // Field name: aruco_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->aruco_pose, cdr))
    {
      return false;
    }
  }

  // Field name: aruco_id
  {
    cdr << ros_message->aruco_id;
  }

  // Field name: aruco_found
  {
    cdr << (ros_message->aruco_found ? true : false);
  }

  return true;
}

static bool _ArucoLocation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArucoLocation__ros_msg_type * ros_message = static_cast<_ArucoLocation__ros_msg_type *>(untyped_ros_message);
  // Field name: aruco_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->aruco_pose))
    {
      return false;
    }
  }

  // Field name: aruco_id
  {
    cdr >> ros_message->aruco_id;
  }

  // Field name: aruco_found
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aruco_found = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aruco_interfaces
size_t get_serialized_size_aruco_interfaces__msg__ArucoLocation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArucoLocation__ros_msg_type * ros_message = static_cast<const _ArucoLocation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name aruco_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->aruco_pose), current_alignment);
  // field.name aruco_id
  {
    size_t item_size = sizeof(ros_message->aruco_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aruco_found
  {
    size_t item_size = sizeof(ros_message->aruco_found);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArucoLocation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aruco_interfaces__msg__ArucoLocation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aruco_interfaces
size_t max_serialized_size_aruco_interfaces__msg__ArucoLocation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: aruco_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }
  // member: aruco_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: aruco_found
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ArucoLocation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_aruco_interfaces__msg__ArucoLocation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ArucoLocation = {
  "aruco_interfaces::msg",
  "ArucoLocation",
  _ArucoLocation__cdr_serialize,
  _ArucoLocation__cdr_deserialize,
  _ArucoLocation__get_serialized_size,
  _ArucoLocation__max_serialized_size
};

static rosidl_message_type_support_t _ArucoLocation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArucoLocation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aruco_interfaces, msg, ArucoLocation)() {
  return &_ArucoLocation__type_support;
}

#if defined(__cplusplus)
}
#endif
