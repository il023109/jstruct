// Generated automatically by libjstruct. Do Not Modify.
// This file must be included directly in a single c file.

#include "error_info.h"
#include <jstruct/jstruct.h>
#include <json-c/json_object.h>
#include <json-c/json_object.h>
#include <errno.h>
struct jstruct_object_property jstruct_error_info__jstruct_properties__[] = {{.name = "error", .type = {.json = json_type_int, .extra = jstruct_enum_extra_type(enum jstruct_error)}, .offset = offsetof(struct jstruct_error_info, error)}, {.name = "message", .type = {.json = json_type_string}, .offset = offsetof(struct jstruct_error_info, message)}, {.name = "property", .type = {.json = json_type_string}, .offset = offsetof(struct jstruct_error_info, property)}, {.name = "last_errno", .type = {.json = json_type_int}, .offset = offsetof(struct jstruct_error_info, last_errno)}, {0}};