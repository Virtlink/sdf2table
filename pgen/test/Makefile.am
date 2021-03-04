# $Id: Makefile.am,v 1.8 2003/02/11 13:07:29 markvdb Exp $

SUBDIRS    = grammars tables

EXTRA_DIST = lang-types regress-lang.sh.src 

TESTS      = regress-lang

CLEANFILES = $(TESTS)

% : %.sh.src Makefile
	sed 's@__TOP_BUILDDIR__@$(top_builddir)@g;\
             s@__TOP_SRCDIR__@$(top_srcdir)@g;\
             s@__ATERM__@$(ATERM)@g' < $< > $@ && \
	chmod +x $@
