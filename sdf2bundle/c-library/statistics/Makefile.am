# $Id: Makefile.am 23709 2007-09-26 11:11:48Z kooiker $

include $(top_srcdir)/Makefile.meta

lib_LTLIBRARIES = libstatistics.la
include_HEADERS = rsrc-usage.h 

libstatistics_la_CPPFLAGS =  -DDISABLE_DYNAMIC_CHECKING
libstatistics_la_LDFLAGS = -avoid-version -no-undefined $(AM_LDFLAGS)
libstatistics_la_SOURCES = rsrc-usage.c
