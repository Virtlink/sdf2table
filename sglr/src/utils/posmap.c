/* $Id: posmap.c 18805 2006-06-09 13:07:18Z economop $ */   

/** \file 
 * \ingroup utils
 */

#include "posmap.h"
#include <stdlib.h>
#include <stdio.h>

PosMap PosMapCreate(int size)
{
  PosMap b;
  int i;

  if (size <= 0) {
    b = NULL;
  }
  else {
    b = calloc(size, sizeof(int));

    if (b == NULL) {
      ATerror("out of memory in PosMapCreate\n");
    }    
    for (i = 0; i < size; i++) {
      b[i] = -1;
    }
  }
 
  return b;
}

void PosMapDestroy(PosMap b)
{
  if (b) {
    free(b);
  }
}

void PosMapSet(PosMap b, int index, int length)
{
   b[index] = length;
}

void PosMapUnset(PosMap b, int index)
{
  b[index] = -1;
}

int PosMapIsSet(PosMap b, int index)
{
  return b[index];
}
