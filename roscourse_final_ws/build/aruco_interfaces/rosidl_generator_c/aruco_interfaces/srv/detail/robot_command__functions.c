// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_interfaces:srv/RobotCommand.idl
// generated code does not contain a copyright notice
#include "aruco_interfaces/srv/detail/robot_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
aruco_interfaces__srv__RobotCommand_Request__init(aruco_interfaces__srv__RobotCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->target_pose)) {
    aruco_interfaces__srv__RobotCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
aruco_interfaces__srv__RobotCommand_Request__fini(aruco_interfaces__srv__RobotCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__Pose2D__fini(&msg->target_pose);
}

bool
aruco_interfaces__srv__RobotCommand_Request__are_equal(const aruco_interfaces__srv__RobotCommand_Request * lhs, const aruco_interfaces__srv__RobotCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  return true;
}

bool
aruco_interfaces__srv__RobotCommand_Request__copy(
  const aruco_interfaces__srv__RobotCommand_Request * input,
  aruco_interfaces__srv__RobotCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  return true;
}

aruco_interfaces__srv__RobotCommand_Request *
aruco_interfaces__srv__RobotCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__srv__RobotCommand_Request * msg = (aruco_interfaces__srv__RobotCommand_Request *)allocator.allocate(sizeof(aruco_interfaces__srv__RobotCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_interfaces__srv__RobotCommand_Request));
  bool success = aruco_interfaces__srv__RobotCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_interfaces__srv__RobotCommand_Request__destroy(aruco_interfaces__srv__RobotCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_interfaces__srv__RobotCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_interfaces__srv__RobotCommand_Request__Sequence__init(aruco_interfaces__srv__RobotCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__srv__RobotCommand_Request * data = NULL;

  if (size) {
    data = (aruco_interfaces__srv__RobotCommand_Request *)allocator.zero_allocate(size, sizeof(aruco_interfaces__srv__RobotCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_interfaces__srv__RobotCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_interfaces__srv__RobotCommand_Request__fini(&data[i - 1]);
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
aruco_interfaces__srv__RobotCommand_Request__Sequence__fini(aruco_interfaces__srv__RobotCommand_Request__Sequence * array)
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
      aruco_interfaces__srv__RobotCommand_Request__fini(&array->data[i]);
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

aruco_interfaces__srv__RobotCommand_Request__Sequence *
aruco_interfaces__srv__RobotCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__srv__RobotCommand_Request__Sequence * array = (aruco_interfaces__srv__RobotCommand_Request__Sequence *)allocator.allocate(sizeof(aruco_interfaces__srv__RobotCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_interfaces__srv__RobotCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_interfaces__srv__RobotCommand_Request__Sequence__destroy(aruco_interfaces__srv__RobotCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_interfaces__srv__RobotCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_interfaces__srv__RobotCommand_Request__Sequence__are_equal(const aruco_interfaces__srv__RobotCommand_Request__Sequence * lhs, const aruco_interfaces__srv__RobotCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_interfaces__srv__RobotCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_interfaces__srv__RobotCommand_Request__Sequence__copy(
  const aruco_interfaces__srv__RobotCommand_Request__Sequence * input,
  aruco_interfaces__srv__RobotCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_interfaces__srv__RobotCommand_Request);
    aruco_interfaces__srv__RobotCommand_Request * data =
      (aruco_interfaces__srv__RobotCommand_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_interfaces__srv__RobotCommand_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aruco_interfaces__srv__RobotCommand_Request__fini(&data[i]);
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
    if (!aruco_interfaces__srv__RobotCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
aruco_interfaces__srv__RobotCommand_Response__init(aruco_interfaces__srv__RobotCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
aruco_interfaces__srv__RobotCommand_Response__fini(aruco_interfaces__srv__RobotCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
aruco_interfaces__srv__RobotCommand_Response__are_equal(const aruco_interfaces__srv__RobotCommand_Response * lhs, const aruco_interfaces__srv__RobotCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
aruco_interfaces__srv__RobotCommand_Response__copy(
  const aruco_interfaces__srv__RobotCommand_Response * input,
  aruco_interfaces__srv__RobotCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

aruco_interfaces__srv__RobotCommand_Response *
aruco_interfaces__srv__RobotCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__srv__RobotCommand_Response * msg = (aruco_interfaces__srv__RobotCommand_Response *)allocator.allocate(sizeof(aruco_interfaces__srv__RobotCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_interfaces__srv__RobotCommand_Response));
  bool success = aruco_interfaces__srv__RobotCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_interfaces__srv__RobotCommand_Response__destroy(aruco_interfaces__srv__RobotCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_interfaces__srv__RobotCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_interfaces__srv__RobotCommand_Response__Sequence__init(aruco_interfaces__srv__RobotCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__srv__RobotCommand_Response * data = NULL;

  if (size) {
    data = (aruco_interfaces__srv__RobotCommand_Response *)allocator.zero_allocate(size, sizeof(aruco_interfaces__srv__RobotCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_interfaces__srv__RobotCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_interfaces__srv__RobotCommand_Response__fini(&data[i - 1]);
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
aruco_interfaces__srv__RobotCommand_Response__Sequence__fini(aruco_interfaces__srv__RobotCommand_Response__Sequence * array)
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
      aruco_interfaces__srv__RobotCommand_Response__fini(&array->data[i]);
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

aruco_interfaces__srv__RobotCommand_Response__Sequence *
aruco_interfaces__srv__RobotCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__srv__RobotCommand_Response__Sequence * array = (aruco_interfaces__srv__RobotCommand_Response__Sequence *)allocator.allocate(sizeof(aruco_interfaces__srv__RobotCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_interfaces__srv__RobotCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_interfaces__srv__RobotCommand_Response__Sequence__destroy(aruco_interfaces__srv__RobotCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_interfaces__srv__RobotCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_interfaces__srv__RobotCommand_Response__Sequence__are_equal(const aruco_interfaces__srv__RobotCommand_Response__Sequence * lhs, const aruco_interfaces__srv__RobotCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_interfaces__srv__RobotCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_interfaces__srv__RobotCommand_Response__Sequence__copy(
  const aruco_interfaces__srv__RobotCommand_Response__Sequence * input,
  aruco_interfaces__srv__RobotCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_interfaces__srv__RobotCommand_Response);
    aruco_interfaces__srv__RobotCommand_Response * data =
      (aruco_interfaces__srv__RobotCommand_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_interfaces__srv__RobotCommand_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          aruco_interfaces__srv__RobotCommand_Response__fini(&data[i]);
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
    if (!aruco_interfaces__srv__RobotCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
