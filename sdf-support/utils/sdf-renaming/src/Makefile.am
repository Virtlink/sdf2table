# $Id: Makefile.am,v 1.2 2004/01/13 07:39:52 jurgenv Exp $

include ${top_srcdir}/make_rules

EXTRA_DIST = sdf-renaming.idef
pkgdata_DATA = sdf-renaming.idef

bin_PROGRAMS = sdf-renaming

sdf_renaming_SOURCES = sdf-renaming.c sdf-renaming.tif.c
sdf_renaming_LDADD = -L$(top_builddir)/lib -lSDFME -lSDF2PT \
		 -L$(PT_SUPPORT)/lib -lmept \
		 -L$(ERROR_SUPPORT)/lib -lErrorAPI \
                 -L$(TOOLBUSLIB)/lib -lATB \
                 -L$(ATERM)/lib -lATerm \
                 $(SOCKLIBS)

noinst_HEADERS		= sdf-renaming.tif.h

INCLUDES	        = -I$(top_srcdir)/lib \
                          -I$(ATERM)/include  \
                          -I$(TOOLBUSLIB)/include \
                          -I$(SDF_SUPPORT)/include \
                          -I$(ERROR_SUPPORT)/include \
                          -I$(PT_SUPPORT)/include
