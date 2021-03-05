/* $Id: marking.h 18805 2006-06-09 13:07:18Z economop $ */

/** \file
 * \ingroup utils 
 */

#ifndef SG_MARKING_H
#define SG_MARKING_H
#include <aterm2.h>

void SG_Mark(ATerm t);
void SG_UnMark(ATerm t);
ATbool SG_IsMarked(ATerm t);
void SG_cleanupMarks(void);
void SG_initMarks(void);

#endif
