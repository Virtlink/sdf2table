/* $Id: bitmap.c 20210 2006-08-30 14:47:59Z economop $ */   

/** \file
 * \ingroup utils
 */

#include "bitmap.h"
#include <stdlib.h>
#include <stdio.h>

Bitmap BitmapCreate(int size) {
  Bitmap b;
  if (size <= 0) {
    b = NULL;
  }
  else {
    b = calloc(size, sizeof(int));

    if (b == NULL) {
      ATerror("out of memory in BitmapCreate\n");
    }    
  }
 
  return b;
}

void BitmapDestroy(Bitmap b) {
  if (b) {
    free(b);
  }
}

Bitmap BitmapSet(Bitmap b, int index) {
   b[index] = 1;
   
   return b;
}

Bitmap BitmapUnset(Bitmap b, int index) {
  b[index] = 0;

  return b;
}

int BitmapIsSet(Bitmap b, int index) {
  return b[index];
}
