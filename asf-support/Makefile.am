# $Id: Makefile.am,v 1.11.2.2 2004/09/16 12:59:14 uid507 Exp $

SUBDIRS = lib utils

ACLOCAL_FLAGS = -I .

CLEANFILES = ${PACKAGE}-${VERSION}.pkg

EXTRA_DIST = program-check.m4 package

noinst_SCRIPTS = ${PACKAGE}-${VERSION}.pkg

${PACKAGE}-${VERSION}.pkg: package Makefile
	cp $< $@

