#ifndef JSTRUCT_RESULT_H
#define JSTRUCT_RESULT_H
// Generated automatically by libjstruct. Do Not Modify.

#include <jstruct/jstruct.h>
#include <json-c/json_object.h>
#include <json-c/json_object.h>
#include <errno.h>
struct jstruct_result
{
  struct arraylist *allocated;
  enum jstruct_error error;
  char *message;
  char *property;
  int index;
  int last_errno;
  struct json_object *_inner_errors;
};
extern struct jstruct_object_property jstruct_result__jstruct_properties__[];

#endif