# $Id: Makefile.am 19677 2006-07-25 19:34:00Z martinrw $

include $(top_srcdir)/Makefile.meta

SUBDIRS = test

bin_PROGRAMS = implodePT 

INCLUDES = \
	-I$(top_srcdir)/libmept \
	$(ERROR_SUPPORT_CFLAGS)

implodePT_SOURCES = implodePT-main.c
implodePT_LDADD	=\
	-L$(top_builddir)/libmept -lmept \
	$(ERROR_SUPPORT_LIBS)
