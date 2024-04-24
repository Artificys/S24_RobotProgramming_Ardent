// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:srv/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_
#define ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

// Struct defined in srv/RobotCommand in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__RobotCommand_Request
{
  geometry_msgs__msg__Pose2D target_pose;
} aruco_interfaces__srv__RobotCommand_Request;

// Struct for a sequence of aruco_interfaces__srv__RobotCommand_Request.
typedef struct aruco_interfaces__srv__RobotCommand_Request__Sequence
{
  aruco_interfaces__srv__RobotCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__RobotCommand_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RobotCommand in the package aruco_interfaces.
typedef struct aruco_interfaces__srv__RobotCommand_Response
{
  bool success;
} aruco_interfaces__srv__RobotCommand_Response;

// Struct for a sequence of aruco_interfaces__srv__RobotCommand_Response.
typedef struct aruco_interfaces__srv__RobotCommand_Response__Sequence
{
  aruco_interfaces__srv__RobotCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__srv__RobotCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__SRV__DETAIL__ROBOT_COMMAND__STRUCT_H_
