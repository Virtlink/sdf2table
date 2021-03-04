/*
 $Id: dump-skel.h 6010 2001-11-07 14:02:35Z markvdb $
 */

#include <stdlib.h>

#include <atb-tool.h>

#include "parser.h"
#include "sglr.h"

void DoDump(parse_table *pt, int requested, ATbool unparsed);
