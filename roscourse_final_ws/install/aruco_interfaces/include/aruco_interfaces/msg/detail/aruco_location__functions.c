// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_interfaces:msg/ArucoLocation.idl
// generated code does not contain a copyright notice
#include "aruco_interfaces/msg/detail/aruco_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `aruco_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
aruco_interfaces__msg__ArucoLocation__init(aruco_interfaces__msg__ArucoLocation * msg)
{
  if (!msg) {
    return false;
  }
  // aruco_pose
  if (!geometry_msgs__msg__Pose__init(&msg->aruco_pose)) {
    aruco_interfaces__msg__ArucoLocation__fini(msg);
    return false;
  }
  // aruco_id
  // aruco_found
  return true;
}

void
aruco_interfaces__msg__ArucoLocation__fini(aruco_interfaces__msg__ArucoLocation * msg)
{
  if (!msg) {
    return;
  }
  // aruco_pose
  geometry_msgs__msg__Pose__fini(&msg->aruco_pose);
  // aruco_id
  // aruco_found
}

bool
aruco_interfaces__msg__ArucoLocation__are_equal(const aruco_interfaces__msg__ArucoLocation * lhs, const aruco_interfaces__msg__ArucoLocation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // aruco_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->aruco_pose), &(rhs->aruco_pose)))
  {
    return false;
  }
  // aruco_id
  if (lhs->aruco_id != rhs->aruco_id) {
    return false;
  }
  // aruco_found
  if (lhs->aruco_found != rhs->aruco_found) {
    return false;
  }
  return true;
}

bool
aruco_interfaces__msg__ArucoLocation__copy(
  const aruco_interfaces__msg__ArucoLocation * input,
  aruco_interfaces__msg__ArucoLocation * output)
{
  if (!input || !output) {
    return false;
  }
  // aruco_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->aruco_pose), &(output->aruco_pose)))
  {
    return false;
  }
  // aruco_id
  output->aruco_id = input->aruco_id;
  // aruco_found
  output->aruco_found = input->aruco_found;
  return true;
}

aruco_interfaces__msg__ArucoLocation *
aruco_interfaces__msg__ArucoLocation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__ArucoLocation * msg = (aruco_interfaces__msg__ArucoLocation *)allocator.allocate(sizeof(aruco_interfaces__msg__ArucoLocation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_interfaces__msg__ArucoLocation));
  bool success = aruco_interfaces__msg__ArucoLocation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_interfaces__msg__ArucoLocation__destroy(aruco_interfaces__msg__ArucoLocation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_interfaces__msg__ArucoLocation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_interfaces__msg__ArucoLocation__Sequence__init(aruco_interfaces__msg__ArucoLocation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__ArucoLocation * data = NULL;

  if (size) {
    data = (aruco_interfaces__msg__ArucoLocation *)allocator.zero_allocate(size, sizeof(aruco_interfaces__msg__ArucoLocation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_interfaces__msg__ArucoLocation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_interfaces__msg__ArucoLocation__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_interfaces__msg__ArucoLocation__Sequence__fini(aruco_interfaces__msg__ArucoLocation__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_interfaces__msg__ArucoLocation__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_interfaces__msg__ArucoLocation__Sequence *
aruco_interfaces__msg__ArucoLocation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__ArucoLocation__Sequence * array = (aruco_interfaces__msg__ArucoLocation__Sequence *)allocator.allocate(sizeof(aruco_interfaces__msg__ArucoLocation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_interfaces__msg__ArucoLocation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_interfaces__msg__ArucoLocation__Sequence__destroy(aruco_interfaces__msg__ArucoLocation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_interfaces__msg__ArucoLocation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_interfaces__msg__ArucoLocation__Sequence__are_equal(const aruco_interfaces__msg__ArucoLocation__Sequence * lhs, const aruco_interfaces__msg__ArucoLocation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_interfaces__msg__ArucoLocation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_interfaces__msg__ArucoLocation__Sequence__copy(
  const aruco_interfaces__msg__ArucoLocation__Sequence * input,
  aruco_interfaces__msg__ArucoLocation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_interfaces__msg__ArucoLocation);
    aruco_interfaces__msg__ArucoLocation * data =
      (aruco_interfaces__msg__ArucoLocation *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_interfaces__msg__ArucoLocation__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aruco_interfaces__msg__ArucoLocation__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_interfaces__msg__ArucoLocation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
