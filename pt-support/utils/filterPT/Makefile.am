
SUBDIRS = test

bin_PROGRAMS = filterPT

noinst_HEADERS = \
	minmax.h \
	flattenAgain.h

INCLUDES = \
        -I${top_srcdir}/libmept \
        -I${ERROR_SUPPORT}/include \
        -I${ATERM}/include


filterPT_SOURCES = \
	main.c \
	minmax.c \
	flattenAgain.c

filterPT_LDADD =\
        -L${top_builddir}/libmept -lmept \
        -L${ERROR_SUPPORT}/lib -lErrorAPI \
        -L${ATERM}/lib -lATerm

