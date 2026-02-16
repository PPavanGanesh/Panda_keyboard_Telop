// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ros2_data:action/MoveRP.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ros2_data/action/detail/move_rp__struct.h"
#include "ros2_data/action/detail/move_rp__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_Goal_type_support_ids_t;

static const _MoveRP_Goal_type_support_ids_t _MoveRP_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_Goal_type_support_symbol_names_t _MoveRP_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_Goal)),
  }
};

typedef struct _MoveRP_Goal_type_support_data_t
{
  void * data[2];
} _MoveRP_Goal_type_support_data_t;

static _MoveRP_Goal_type_support_data_t _MoveRP_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_Goal_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRP_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_Goal)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_Result_type_support_ids_t;

static const _MoveRP_Result_type_support_ids_t _MoveRP_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_Result_type_support_symbol_names_t _MoveRP_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_Result)),
  }
};

typedef struct _MoveRP_Result_type_support_data_t
{
  void * data[2];
} _MoveRP_Result_type_support_data_t;

static _MoveRP_Result_type_support_data_t _MoveRP_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_Result_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRP_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_Result)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_Feedback_type_support_ids_t;

static const _MoveRP_Feedback_type_support_ids_t _MoveRP_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_Feedback_type_support_symbol_names_t _MoveRP_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_Feedback)),
  }
};

typedef struct _MoveRP_Feedback_type_support_data_t
{
  void * data[2];
} _MoveRP_Feedback_type_support_data_t;

static _MoveRP_Feedback_type_support_data_t _MoveRP_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_Feedback_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRP_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_Feedback)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_SendGoal_Request_type_support_ids_t;

static const _MoveRP_SendGoal_Request_type_support_ids_t _MoveRP_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_SendGoal_Request_type_support_symbol_names_t _MoveRP_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_SendGoal_Request)),
  }
};

typedef struct _MoveRP_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveRP_SendGoal_Request_type_support_data_t;

static _MoveRP_SendGoal_Request_type_support_data_t _MoveRP_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_SendGoal_Request_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRP_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_SendGoal_Request)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_SendGoal_Response_type_support_ids_t;

static const _MoveRP_SendGoal_Response_type_support_ids_t _MoveRP_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_SendGoal_Response_type_support_symbol_names_t _MoveRP_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_SendGoal_Response)),
  }
};

typedef struct _MoveRP_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveRP_SendGoal_Response_type_support_data_t;

static _MoveRP_SendGoal_Response_type_support_data_t _MoveRP_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_SendGoal_Response_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRP_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_SendGoal_Response)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_SendGoal_type_support_ids_t;

static const _MoveRP_SendGoal_type_support_ids_t _MoveRP_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_SendGoal_type_support_symbol_names_t _MoveRP_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_SendGoal)),
  }
};

typedef struct _MoveRP_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveRP_SendGoal_type_support_data_t;

static _MoveRP_SendGoal_type_support_data_t _MoveRP_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_SendGoal_service_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveRP_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_SendGoal)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_GetResult_Request_type_support_ids_t;

static const _MoveRP_GetResult_Request_type_support_ids_t _MoveRP_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_GetResult_Request_type_support_symbol_names_t _MoveRP_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_GetResult_Request)),
  }
};

typedef struct _MoveRP_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveRP_GetResult_Request_type_support_data_t;

static _MoveRP_GetResult_Request_type_support_data_t _MoveRP_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_GetResult_Request_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRP_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_GetResult_Request)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_GetResult_Response_type_support_ids_t;

static const _MoveRP_GetResult_Response_type_support_ids_t _MoveRP_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_GetResult_Response_type_support_symbol_names_t _MoveRP_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_GetResult_Response)),
  }
};

typedef struct _MoveRP_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveRP_GetResult_Response_type_support_data_t;

static _MoveRP_GetResult_Response_type_support_data_t _MoveRP_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_GetResult_Response_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRP_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_GetResult_Response)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_GetResult_type_support_ids_t;

static const _MoveRP_GetResult_type_support_ids_t _MoveRP_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_GetResult_type_support_symbol_names_t _MoveRP_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_GetResult)),
  }
};

typedef struct _MoveRP_GetResult_type_support_data_t
{
  void * data[2];
} _MoveRP_GetResult_type_support_data_t;

static _MoveRP_GetResult_type_support_data_t _MoveRP_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_GetResult_service_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveRP_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_GetResult)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveRP_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveRP_FeedbackMessage_type_support_ids_t;

static const _MoveRP_FeedbackMessage_type_support_ids_t _MoveRP_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveRP_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveRP_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveRP_FeedbackMessage_type_support_symbol_names_t _MoveRP_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, action, MoveRP_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, action, MoveRP_FeedbackMessage)),
  }
};

typedef struct _MoveRP_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveRP_FeedbackMessage_type_support_data_t;

static _MoveRP_FeedbackMessage_type_support_data_t _MoveRP_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveRP_FeedbackMessage_message_typesupport_map = {
  2,
  "ros2_data",
  &_MoveRP_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveRP_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveRP_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveRP_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveRP_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, action, MoveRP_FeedbackMessage)() {
  return &::ros2_data::action::rosidl_typesupport_c::MoveRP_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ros2_data/action/move_rp.h"
// already included above
// #include "ros2_data/action/detail/move_rp__type_support.h"

static rosidl_action_type_support_t _ros2_data__action__MoveRP__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ros2_data, action, MoveRP)()
{
  // Thread-safe by always writing the same values to the static struct
  _ros2_data__action__MoveRP__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ros2_data, action, MoveRP_SendGoal)();
  _ros2_data__action__MoveRP__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ros2_data, action, MoveRP_GetResult)();
  _ros2_data__action__MoveRP__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ros2_data__action__MoveRP__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ros2_data, action, MoveRP_FeedbackMessage)();
  _ros2_data__action__MoveRP__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ros2_data__action__MoveRP__typesupport_c;
}

#ifdef __cplusplus
}
#endif
