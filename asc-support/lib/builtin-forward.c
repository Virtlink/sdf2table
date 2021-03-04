/*{{{  includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <MEPT-utils.h>
#include <PTMEPT.h>
#include <aterm2.h>
#include "asc-builtins.h"
#include "Library.h"
#include "Error-utils.h"

/*}}} */

/* DO NOT EDIT: This file is generated */

static ATbool initialized = ATfalse;

void initBuiltins(void)
{
  CO_initLibraryApi();
  PTPT_initPTMEPTApi();
  PT_initAsFix2Api(); 
  initErrorApi();
  initialized = ATtrue;

  return;
}

static PT_Tree getBuiltinArgument(PT_Tree builtin, int i)
{
  /* "name" L "(" L <arg0> L "," L <arg1> L "," L <arg2> L  ... */
  /* |-----4------| |------4-----| |-----4------| |-------- ... */

  return PT_getArgsTreeAt(PT_getTreeArgs(builtin),4 + 4 * i);
}

/* Naive implementation: just do strcmp's until we find the correct
 * function. Idea: use asc-support or similar hashtable implementation.
 */
PT_Tree forwardBuiltin(ATerm builtin, PT_Tree input)
{
  PT_Tree result = NULL;
  PT_Symbol type = NULL;
  AFun afun;
  char *name = NULL;

  assert(initialized && "builtins are not initialized");
  assert(ATgetType(builtin) == AT_APPL && "builtins should be ATermAppls");

  afun = ATgetAFun(builtin);
  name = ATgetName(afun);
  type = PT_getProductionRhs(PT_getTreeProd(input));


  if (!strcmp(name, "set-anno")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    PT_Tree arg2 = getBuiltinArgument(input, 2);
    result = ASFE_set_anno(type , arg0, arg1, arg2);
  }
  if (!strcmp(name, "get-anno")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    result = ASFE_get_anno(type , arg0, arg1);
  }
  if (!strcmp(name, "get-term-anno")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    result = ASFE_get_term_anno(type , arg0, arg1);
  }
  if (!strcmp(name, "set-term-anno")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    PT_Tree arg2 = getBuiltinArgument(input, 2);
    result = ASFE_set_term_anno(type , arg0, arg1, arg2);
  }
  if (!strcmp(name, "execute-command")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_execute_command(type , arg0);
  }
  if (!strcmp(name, "read-from-command")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_read_from_command(type , arg0);
  }
  if (!strcmp(name, "term-less")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    result = ASFE_term_less(type , arg0, arg1);
  }
  if (!strcmp(name, "lift-to-tree")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_lift_to_tree(type , arg0);
  }
  if (!strcmp(name, "lower-from-tree")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_lower_from_tree(type , arg0);
  }
  if (!strcmp(name, "lift-to-term")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_lift_to_term(type , arg0);
  }
  if (!strcmp(name, "implode")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_implode(type , arg0);
  }
  if (!strcmp(name, "parse-file")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_parse_file(type , arg0);
  }
  if (!strcmp(name, "parse-bytes")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_parse_bytes(type , arg0);
  }
  if (!strcmp(name, "unparse-to-bytes")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_unparse_to_bytes(type , arg0);
  }
  if (!strcmp(name, "unparse-to-file")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    result = ASFE_unparse_to_file(type , arg0, arg1);
  }
  if (!strcmp(name, "read-term-from-file")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_read_term_from_file(type , arg0);
  }
  if (!strcmp(name, "write-term-to-file")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    result = ASFE_write_term_to_file(type , arg0, arg1);
  }
  if (!strcmp(name, "read-bytes-from-file")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_read_bytes_from_file(type , arg0);
  }
  if (!strcmp(name, "write-bytes-to-file")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    result = ASFE_write_bytes_to_file(type , arg0, arg1);
  }
  if (!strcmp(name, "tide-connect")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    PT_Tree arg1 = getBuiltinArgument(input, 1);
    result = ASFE_tide_connect(type , arg0, arg1);
  }
  if (!strcmp(name, "tide-disconnect")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_tide_disconnect(type , arg0);
  }
  if (!strcmp(name, "tide-step")) {
    PT_Tree arg0 = getBuiltinArgument(input, 0);
    result = ASFE_tide_step(type , arg0);
  }
  if (!strcmp(name, "next-id")) {
    result = ASFE_next_id(type );
  }

  return result ? result : input; 
}
