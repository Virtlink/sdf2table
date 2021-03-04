/*
 $Id: dump-priorities.c,v 1.10 2001/11/07 14:01:49 markvdb Exp $
 */

#include "dump-skel.h"

void DumpOnePriority(FILE *out, parse_table *pt, int l)
{
  ATermList pr;

  if((pr = SG_LookupGtrPriority(pt, SG_SETLABEL(l))))
    ATfprintf(out,"%d\t%t\n", l, pr);
}

void DumpAllPriorities(FILE *out, parse_table *pt)
{
  int l;

  for(l=SG_PROD_START; l < (SG_PROD_START + pt->numprods); l++)
    DumpOnePriority(out, pt, l);
}

void DoDump(parse_table *pt, int requested, ATbool unparsed)
{
  if(requested >= 0)
    DumpOnePriority(stdout, pt, requested);
  else
    DumpAllPriorities(stdout, pt);
}
