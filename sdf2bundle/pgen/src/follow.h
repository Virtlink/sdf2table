/* $Id: follow.h 21928 2007-03-14 14:25:49Z economop $ */

#ifndef FOLLOW_H
#define FOLLOW_H

#include "characters.h"

void calc_follow_table();
CC_Class *PGEN_getFollowSet(int prodNumber);
void destroy_follow_table();

#endif
