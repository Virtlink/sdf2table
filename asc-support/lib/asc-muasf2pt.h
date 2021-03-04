/* $Id: asc-muasf2pt.h,v 1.2 2004/02/17 10:56:04 jurgenv Exp $ */

#ifndef _MUASF2PT_H
#define _MUASF2PT_H

#include <MEPT.h>

PT_Tree muASFToTree(ATerm tree);
PT_Tree muASFToTreeWithLayout(ATerm tree, PT_Tree layout);

#endif
