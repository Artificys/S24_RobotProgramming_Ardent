// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_interfaces:msg/ArucoLocation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_interfaces/msg/detail/aruco_location__rosidl_typesupport_introspection_c.h"
#include "aruco_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_interfaces/msg/detail/aruco_location__functions.h"
#include "aruco_interfaces/msg/detail/aruco_location__struct.h"


// Include directives for member types
// Member `aruco_pose`
#include "geometry_msgs/msg/pose.h"
// Member `aruco_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_interfaces__msg__ArucoLocation__init(message_memory);
}

void ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_fini_function(void * message_memory)
{
  aruco_interfaces__msg__ArucoLocation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_member_array[3] = {
  {
    "aruco_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__msg__ArucoLocation, aruco_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aruco_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__msg__ArucoLocation, aruco_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aruco_found",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_interfaces__msg__ArucoLocation, aruco_found),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_members = {
  "aruco_interfaces__msg",  // message namespace
  "ArucoLocation",  // message name
  3,  // number of fields
  sizeof(aruco_interfaces__msg__ArucoLocation),
  ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_member_array,  // message members
  ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_init_function,  // function to initialize message memory (memory has to be allocated)
  ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_type_support_handle = {
  0,
  &ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_interfaces, msg, ArucoLocation)() {
  ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_type_support_handle.typesupport_identifier) {
    ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ArucoLocation__rosidl_typesupport_introspection_c__ArucoLocation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
