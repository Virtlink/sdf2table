# $Id: Makefile.am,v 1.19.2.2 2004/09/16 12:59:27 uid507 Exp $

SUBDIRS = libmept libptmept utils  test

ACLOCAL_FLAGS = -I .

CLEANFILES = ${PACKAGE}-${VERSION}.pkg

EXTRA_DIST=package

noinst_SCRIPTS = ${PACKAGE}-${VERSION}.pkg

${PACKAGE}-${VERSION}.pkg: package Makefile
	cp $< $@

