/*$Id: gssEdgeList.h 21616 2007-03-01 19:00:02Z economop $*/

/** \file
 * \ingroup gss
 */

#ifndef _GSSLIST_H_
#define _GSSLIST_H_

#include "list.h"
#include "gssEdge-data.h"

typedef List GSSEdgeList;

#define     GSS_getEdgeListHead(list) ((GSSEdge)SGLR_UTIL_getHead(list))
#define     GSS_getEdgeListTail(list) ((GSSEdgeList)SGLR_UTIL_getTail(list))
/*GSSEdge     GSS_getEdgeListHead(GSSEdgeList list);*/
/*GSSEdgeList GSS_getEdgeListTail(GSSEdgeList list);*/
GSSEdgeList GSS_addEdgeListElement(GSSEdge element, GSSEdgeList list);
void        GSS_deleteEdgeList(GSSEdgeList list);
GSSEdge     GSS_findElementInEdgeList(GSSEdge element, GSSEdgeList list);
GSSEdgeList GSS_reverseEdgeList(GSSEdgeList list);

#endif //_GSSLIST_H_
