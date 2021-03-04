#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <MEPT-utils.h>
#include <aterm2.h>
#include <asc-support2-me.h>

/* DO NOT EDIT: This file is generated */

PT_Tree  ASFE_set_anno(PT_Symbol type , PT_Tree arg0, PT_Tree arg1, PT_Tree arg2);
PT_Tree  ASC_set_anno(ATerm type , ATerm arg0, ATerm arg1, ATerm arg2);

PT_Tree  ASFE_get_anno(PT_Symbol type , PT_Tree arg0, PT_Tree arg1);
PT_Tree  ASC_get_anno(ATerm type , ATerm arg0, ATerm arg1);

PT_Tree  ASFE_get_term_anno(PT_Symbol type , PT_Tree arg0, PT_Tree arg1);
PT_Tree  ASC_get_term_anno(ATerm type , ATerm arg0, ATerm arg1);

PT_Tree  ASFE_set_term_anno(PT_Symbol type , PT_Tree arg0, PT_Tree arg1, PT_Tree arg2);
PT_Tree  ASC_set_term_anno(ATerm type , ATerm arg0, ATerm arg1, ATerm arg2);

PT_Tree  ASFE_execute_command(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_execute_command(ATerm type , ATerm arg0);

PT_Tree  ASFE_read_from_command(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_read_from_command(ATerm type , ATerm arg0);

PT_Tree  ASFE_term_less(PT_Symbol type , PT_Tree arg0, PT_Tree arg1);
PT_Tree  ASC_term_less(ATerm type , ATerm arg0, ATerm arg1);

PT_Tree  ASFE_lift_to_tree(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_lift_to_tree(ATerm type , ATerm arg0);

PT_Tree  ASFE_lower_from_tree(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_lower_from_tree(ATerm type , ATerm arg0);

PT_Tree  ASFE_lift_to_term(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_lift_to_term(ATerm type , ATerm arg0);

PT_Tree  ASFE_implode(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_implode(ATerm type , ATerm arg0);

PT_Tree  ASFE_parse_file(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_parse_file(ATerm type , ATerm arg0);

PT_Tree  ASFE_parse_bytes(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_parse_bytes(ATerm type , ATerm arg0);

PT_Tree  ASFE_unparse_to_bytes(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_unparse_to_bytes(ATerm type , ATerm arg0);

PT_Tree  ASFE_unparse_to_file(PT_Symbol type , PT_Tree arg0, PT_Tree arg1);
PT_Tree  ASC_unparse_to_file(ATerm type , ATerm arg0, ATerm arg1);

PT_Tree  ASFE_read_term_from_file(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_read_term_from_file(ATerm type , ATerm arg0);

PT_Tree  ASFE_write_term_to_file(PT_Symbol type , PT_Tree arg0, PT_Tree arg1);
PT_Tree  ASC_write_term_to_file(ATerm type , ATerm arg0, ATerm arg1);

PT_Tree  ASFE_read_bytes_from_file(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_read_bytes_from_file(ATerm type , ATerm arg0);

PT_Tree  ASFE_write_bytes_to_file(PT_Symbol type , PT_Tree arg0, PT_Tree arg1);
PT_Tree  ASC_write_bytes_to_file(ATerm type , ATerm arg0, ATerm arg1);

PT_Tree  ASFE_tide_connect(PT_Symbol type , PT_Tree arg0, PT_Tree arg1);
PT_Tree  ASC_tide_connect(ATerm type , ATerm arg0, ATerm arg1);

PT_Tree  ASFE_tide_disconnect(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_tide_disconnect(ATerm type , ATerm arg0);

PT_Tree  ASFE_tide_step(PT_Symbol type , PT_Tree arg0);
PT_Tree  ASC_tide_step(ATerm type , ATerm arg0);

PT_Tree  ASFE_next_id(PT_Symbol type );
PT_Tree  ASC_next_id(ATerm type );

/* This code is not meant for execution, 
 * it is used to check if there is an implementation for every built-in
 */
int main(void)
{
  if (fprintf(stderr, "This program does nothing\n") == 0) {
    ASFE_set_anno(NULL , NULL, NULL, NULL);
    ASC_set_anno(NULL , NULL, NULL, NULL);

    ASFE_get_anno(NULL , NULL, NULL);
    ASC_get_anno(NULL , NULL, NULL);

    ASFE_get_term_anno(NULL , NULL, NULL);
    ASC_get_term_anno(NULL , NULL, NULL);

    ASFE_set_term_anno(NULL , NULL, NULL, NULL);
    ASC_set_term_anno(NULL , NULL, NULL, NULL);

    ASFE_execute_command(NULL , NULL);
    ASC_execute_command(NULL , NULL);

    ASFE_read_from_command(NULL , NULL);
    ASC_read_from_command(NULL , NULL);

    ASFE_term_less(NULL , NULL, NULL);
    ASC_term_less(NULL , NULL, NULL);

    ASFE_lift_to_tree(NULL , NULL);
    ASC_lift_to_tree(NULL , NULL);

    ASFE_lower_from_tree(NULL , NULL);
    ASC_lower_from_tree(NULL , NULL);

    ASFE_lift_to_term(NULL , NULL);
    ASC_lift_to_term(NULL , NULL);

    ASFE_implode(NULL , NULL);
    ASC_implode(NULL , NULL);

    ASFE_parse_file(NULL , NULL);
    ASC_parse_file(NULL , NULL);

    ASFE_parse_bytes(NULL , NULL);
    ASC_parse_bytes(NULL , NULL);

    ASFE_unparse_to_bytes(NULL , NULL);
    ASC_unparse_to_bytes(NULL , NULL);

    ASFE_unparse_to_file(NULL , NULL, NULL);
    ASC_unparse_to_file(NULL , NULL, NULL);

    ASFE_read_term_from_file(NULL , NULL);
    ASC_read_term_from_file(NULL , NULL);

    ASFE_write_term_to_file(NULL , NULL, NULL);
    ASC_write_term_to_file(NULL , NULL, NULL);

    ASFE_read_bytes_from_file(NULL , NULL);
    ASC_read_bytes_from_file(NULL , NULL);

    ASFE_write_bytes_to_file(NULL , NULL, NULL);
    ASC_write_bytes_to_file(NULL , NULL, NULL);

    ASFE_tide_connect(NULL , NULL, NULL);
    ASC_tide_connect(NULL , NULL, NULL);

    ASFE_tide_disconnect(NULL , NULL);
    ASC_tide_disconnect(NULL , NULL);

    ASFE_tide_step(NULL , NULL);
    ASC_tide_step(NULL , NULL);

    ASFE_next_id(NULL );
    ASC_next_id(NULL );

  }

  return 0; 
}

