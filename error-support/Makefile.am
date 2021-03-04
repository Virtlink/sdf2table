# $Id: Makefile.am,v 1.6.2.2 2004/09/16 12:59:22 jurgenv Exp $

SUBDIRS = lib utils doc

ACLOCAL_FLAGS = -I .

CLEANFILES = ${PACKAGE}-${VERSION}.pkg

EXTRA_DIST=package

noinst_SCRIPTS = ${PACKAGE}-${VERSION}.pkg

${PACKAGE}-${VERSION}.pkg: package Makefile
	cp $< $@

