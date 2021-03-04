# $Id: Makefile.am,v 1.31.2.2 2004/09/16 12:59:26 uid507 Exp $

include ${top_srcdir}/make_rules

ACLOCAL_FLAGS = -I .

CLEANFILES = ${PACKAGE}-${VERSION}.pkg

SUBDIRS = src grammar sdf-checker test sdf-upgrade

EXTRA_DIST = reconf program-check.m4 make_rules package

noinst_SCRIPTS = ${PACKAGE}-${VERSION}.pkg

${PACKAGE}-${VERSION}.pkg: package Makefile
	cp $< $@


