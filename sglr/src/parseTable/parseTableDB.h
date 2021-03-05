/*$Id: parseTableDB.h 23818 2007-10-04 16:27:41Z economop $*/

/** \file
 * \ingroup parseTable
 */

#ifndef _PARSETABLEDB_
#define _PARSETABLEDB_

#include "parseTable.h"

ParseTable  *SG_AddParseTable(const char *filename);
void         SG_CacheParseTable(const char *L, ParseTable *pt);
ParseTable  *SG_LookupParseTable(const char *L);
double       SG_getTimeTakenToAllocateTable(void);

#endif /* _PARSETABLEDB_ */

