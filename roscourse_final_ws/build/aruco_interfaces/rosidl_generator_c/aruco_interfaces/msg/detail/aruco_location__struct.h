// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:msg/ArucoLocation.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__STRUCT_H_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'aruco_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/ArucoLocation in the package aruco_interfaces.
typedef struct aruco_interfaces__msg__ArucoLocation
{
  geometry_msgs__msg__Pose aruco_pose;
  uint16_t aruco_id;
  bool aruco_found;
} aruco_interfaces__msg__ArucoLocation;

// Struct for a sequence of aruco_interfaces__msg__ArucoLocation.
typedef struct aruco_interfaces__msg__ArucoLocation__Sequence
{
  aruco_interfaces__msg__ArucoLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__msg__ArucoLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_LOCATION__STRUCT_H_
