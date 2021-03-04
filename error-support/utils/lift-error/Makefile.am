# $Id: Makefile.am,v 1.3.2.2 2004/05/18 08:25:18 jurgenv Exp $

bin_PROGRAMS = lift-error

INCLUDES= \
	-I${top_srcdir}/lib \
	-I${ATERM}/include

lift_error_SOURCES=\
	lift-error.c

lift_error_LDADD=\
	-L${top_builddir}/lib -lErrorAPI\
	-L${ATERM}/lib -lATerm

ERRORS=example
EXTRA_DIST=$(wildcard *.ref) $(wildcard *.trm)

GENERATED_BY_TESTS = \
	example.tree

CLEANFILES=$(TESTS) $(GENERATED_BY_TESTS)

TESTS=$(foreach e, ${ERRORS}, $e.sh)

%.sh: Makefile
	@(	echo "#! /bin/sh";\
		echo "set -e";\
		echo "./lift-error -i ${srcdir}/$*.trm -o $*.tree";\
		echo "${ATERM}/bin/atdiff ${srcdir}/$*.ref $*.tree"\
	) > $@ && chmod +x $@	
