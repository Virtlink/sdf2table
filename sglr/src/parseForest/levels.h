/* $Id: levels.h 18805 2006-06-09 13:07:18Z economop $ */

/** \file 
 * \ingroup parseForest
 */

#ifndef LEVELS_H
#define LEVELS_H
#include <aterm1.h>

void SG_cleanupLevels(void);
void SG_initLevels(void);
void SG_setLevel(ATerm t, int level);
void SG_unsetLevel(ATerm t);
int SG_getLevel(ATerm t);

#endif
