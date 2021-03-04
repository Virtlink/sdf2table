/*
 $Id: dump-skel.h,v 1.6 2001/11/07 14:01:49 markvdb Exp $
 */

#include <stdlib.h>

#include <atb-tool.h>

#include "parser.h"
#include "sglr.h"

void DoDump(parse_table *pt, int requested, ATbool unparsed);
