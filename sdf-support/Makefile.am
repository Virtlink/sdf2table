# $Id: Makefile.am,v 1.11.2.2 2004/09/16 12:59:28 uid507 Exp $

SUBDIRS = lib utils test

ACLOCAL_FLAGS = -I .

EXTRA_DIST = make_rules package

CLEANFILES = ${PACKAGE}-${VERSION}.pkg

noinst_SCRIPTS = ${PACKAGE}-${VERSION}.pkg

${PACKAGE}-${VERSION}.pkg: package Makefile
	cp $< $@


