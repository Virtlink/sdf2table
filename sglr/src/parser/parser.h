/* $Id: parser.h 18867 2006-06-22 14:35:26Z economop $ */

/** \file 
 * \ingroup parser
 */

#ifndef _PARSER_H_
#define _PARSER_H_

#include <MEPT.h>
#include "parseTable.h"
#include "inputString-data.h"

PT_Tree SG_parse(ParseTable *parseTable, InputString string);

#endif  /* _PARSER_H_ */
