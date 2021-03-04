# $Id: Makefile.am,v 1.24.2.2 2004/09/16 12:59:13 uid507 Exp $

SUBDIRS = library utils

ACLOCAL_FLAGS = -I .

CLEANFILES = ${PACKAGE}-${VERSION}.pkg

EXTRA_DIST= reconf package

noinst_SCRIPTS = ${PACKAGE}-${VERSION}.pkg

${PACKAGE}-${VERSION}.pkg: package Makefile
	cp $< $@


