# $Id: Makefile.am 22436 2007-04-16 13:06:45Z economop $

SUBDIRS    = grammars tables terms erroneous

EXTRA_DIST = regressionTests.sh.src

TESTS      = regressionTests

CLEANFILES = $(TESTS) 

% : %.sh.src Makefile
	sed "s@__TOP_BUILDDIR__@$(top_builddir)@g;\
             s@__TOP_SRCDIR__@$(top_srcdir)@g;\
             s@__SGLR__@$(SGLR_PREFIX)@g;\
             s@__PT_SUPPORT__@$(PT_SUPPORT_PREFIX)@g;\
             s@__ERROR_SUPPORT__@$(ERROR_SUPPORT_PREFIX)@g;\
             s@__ATERM__@$(ATERM_PREFIX)@g" < $< > $@ && \
	chmod +x $@
