# $Id: Makefile.am,v 1.29.2.1 2004/11/02 12:46:19 uid509 Exp $

lib_LIBRARIES           = libmept.a
include_HEADERS = \
	MEPT.h \
	MEPT-utils.h \
	MEPT_dict.h

libmept_a_SOURCES = \
	MEPT.c \
	MEPT_dict.c \
	MEPT-utils.c  \
	flattenPT.c \
	implodePT.c \
	yieldPT.c \
	yieldProd.c \
	posInfo.c \
	reportAmbs.c \
	apply.c \
	symbol-renaming.c \
	ordering.c

#AM_CFLAGS = -DDISABLE_DYNAMIC_CHECKING -pg
AM_CFLAGS = -DDISABLE_DYNAMIC_CHECKING

INCLUDES =\
	-I${ATERM}/include \
	-I${ERROR_SUPPORT}/include

api: 
	adt-to-c --compat-term -i MEPT.adt --prefix PT_ -o MEPT

api-clean:
	${RM} MEPT.[ch] MEPT_dict.[ch] MEPT.dict
