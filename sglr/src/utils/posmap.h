/* $Id: posmap.h 18805 2006-06-09 13:07:18Z economop $ */   

/** \file
 * \ingroup utils
 */

#ifndef LENGTHMAP_H
#define LENGTHMAP_H

#include <aterm2.h> 

typedef int* PosMap;

PosMap PosMapCreate(int size);
void PosMapDestroy(PosMap b);
void PosMapSet(PosMap b, int index, int pos);
void PosMapUnset(PosMap b, int index);
int PosMapIsSet(PosMap b, int index);

#endif
