# $Id: Makefile.am,v 1.4.8.2 2004/11/02 08:52:47 uid507 Exp $

ATINC = $(ATERM)/include

INCLUDES = -I$(ATINC) # -DTERM_SIZE_WARNING_THRESHOLD=512

lib_LIBRARIES = libATB.a
libATB_a_SOURCES = atb-tool.c

include_HEADERS = atb-tool.h

bin_PROGRAMS = tbunpack
tbunpack_SOURCES = tbunpack.c atb-tool.c
tbunpack_LDADD = -L$(ATERM)/lib -lATerm
