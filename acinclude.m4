m4_pattern_forbid([^XT_])

# XT_CHECK_ATERM
# --------------
# Check for the ATerm library.
AC_DEFUN([XT_CHECK_ATERM],
[
  AC_ARG_WITH([aterm],
    [AS_HELP_STRING([--with-aterm=DIR], [use ATerm Library at DIR @<:@find with pkg-config@:>@])],
    [ATERM=$withval])

  AC_MSG_CHECKING([whether location of ATerm library is explicitly set])
  if test "${ATERM:+set}" = set; then
    AC_MSG_RESULT([yes])

    # Check the specified value of $ATERM
    XT_PKG_ATERM
    AC_SUBST([ATERM])
    AC_SUBST([ATERM_CFLAGS], ['-I$(ATERM)/include'])
    AC_SUBST([ATERM_LIBS], ['-L$(ATERM)/lib -lATerm -lm'])
  else
    AC_MSG_RESULT([no])
    # Try to find the aterm library using pkgconfig.
    XT_CHECK_PACKAGE([ATERM],[aterm >= 2.3],[lib/libATerm.a])
  fi
])

# XT_CHECK_PACKAGE(VARIABLE,MODULE,[WITNESS])
#
# Checks the existance of package 'MODULE' and sets the 
# variables VARIABLE, VARIABLE_STRCFLAGS, VARIABLE_CFLAFS, and VARIABLE_LIBS.
#
# The optional WITNESS checks if the package is indeed 
# installed at the location where the pkg-config file says it 
# is installed.
#
# ------------------
AC_DEFUN([XT_CHECK_PACKAGE],
[ PKG_CHECK_MODULES([$1],[$2])

  AC_MSG_CHECKING([prefix of package $2])
  $1=`$PKG_CONFIG --variable=prefix "$2"`
  if test -z "$$1"; then
    AC_MSG_ERROR([package $2 does not specify its prefix in the pkg-config file.
          Report this error to the maintainer of this package.])
  else
    AC_MSG_RESULT([$$1])
  fi

m4_ifval([$3],
[test -f "$$1/$3" ||
  AC_MSG_ERROR([no such file: $$1/$3
        The configuration of package $2 claims that the package is
        installed at this location. Please check if the package is installed correctly.])
])dnl

  AC_SUBST([$1_CFLAGS])
  AC_SUBST([$1_LIBS])
  AC_SUBST([$1])
])

AC_DEFUN([XT_PKG_ATERM],
[
  XT_PROG_BAFFLE
])

AC_DEFUN([XT_PROG_BAFFLE],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for baffle at $ATERM/bin/baffle$EXEEXT])
  test -f "$ATERM/bin/baffle$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find baffle. Use --with-aterm.])
  fi
])

############ SVN REVISION ########################################################

AC_DEFUN([XT_SVN_REVISION],
[
AC_MSG_CHECKING([for the SVN revision of the source tree])

if test -e ".svn"; then
   REVFIELD="1"
   SVN_REVISION=`svn status -v -N -q ./ | awk "{ if(\\\$NF == \".\") print \\\$$REVFIELD }"`
   AC_MSG_RESULT($SVN_REVISION)
else
  if test -e "svn-revision"; then
    SVN_REVISION="`cat svn-revision`"
    AC_MSG_RESULT($SVN_REVISION)
  else
    SVN_REVISION="0"
    AC_MSG_RESULT([not available, defaulting to 0])
  fi
fi
AC_SUBST([SVN_REVISION])

])

############ Extended version numbers #############################################
AC_DEFUN([XT_PRE_RELEASE],
[
  AC_REQUIRE([XT_SVN_REVISION])
  VERSION="${VERSION}pre${SVN_REVISION}"
  PACKAGE_VERSION="${PACKAGE_VERSION}pre${SVN_REVISION}"
])

############ Autobundle #############################################

ifdef([AC_OUTPUT_SUBDIRS],[],
   [AC_DEFUN([AC_OUTPUT_SUBDIRS],[subdirs=$1; _AC_OUTPUT_SUBDIRS])])

AC_DEFUN([AB_CONFIG_PKG],
[
   AC_REQUIRE([AC_CONFIG_AUX_DIR_DEFAULT])
   dnl Save configuration flags
   ac_saved_args=$ac_configure_args
   dnl Add package specific flags
   ac_configure_args="$2 $ac_configure_args"
   dnl configure sub-package
   AC_OUTPUT_SUBDIRS($1)
   dnl Restore configuration flags
   ac_configure_args=$ac_saved_args
])
