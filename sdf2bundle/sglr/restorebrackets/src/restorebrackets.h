/**
 * This file is generated by tifstoc. Do not edit!
 * Generated from tifs for tool 'restorebrackets' (prefix='')
 */

#ifndef _RESTOREBRACKETS_H
#define _RESTOREBRACKETS_H

#include <atb-tool.h>

/* Prototypes for functions called from the event handler */
ATerm add_brackets(int conn, ATerm, ATerm);
void rec_terminate(int conn, ATerm);
ATerm restore_brackets(int conn, ATerm, ATerm);
extern ATerm restorebrackets_handler(int conn, ATerm term);
extern ATerm restorebrackets_checker(int conn, ATerm sigs);

#endif
