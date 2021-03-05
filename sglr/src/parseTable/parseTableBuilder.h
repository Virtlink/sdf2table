/*$Id: parseTableBuilder.h 18805 2006-06-09 13:07:18Z economop $*/

/** \file
 * \ingroup parseTable
 */

#ifndef _PARSETABLEBUILDER_
#define _PARSETABLEBUILDER_

#include "parseTable.h"

#include <ptable.h>
#include <aterm2.h>

ParseTable *SG_BuildParseTable(PTBL_ParseTable t, const char *filename);

#endif /* _PARSETABLEBUILDER_ */
