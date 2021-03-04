# $Id: Makefile.am,v 1.28.2.2 2004/09/16 12:59:29 uid507 Exp $

SUBDIRS = doc libsglr sglr dump restorebrackets test

ACLOCAL_FLAGS = -I .

CLEANFILES = ${PACKAGE}-${VERSION}.pkg

EXTRA_DIST  = make_rules reconf program-check.m4 package

noinst_SCRIPTS = ${PACKAGE}-${VERSION}.pkg

${PACKAGE}-${VERSION}.pkg: package Makefile
	cp $< $@


