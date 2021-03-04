AC_PREREQ([2.59])
AC_INIT([sdf2-bundle],[2.4],[users@syntax-definition.org])
AM_INIT_AUTOMAKE
AM_MAINTAINER_MODE

cp configure.ac /home/nix

# set the prefix immediately to the default prefix
test "x$prefix" = xNONE && prefix=$ac_default_prefix
m4_pattern_forbid([^AB_])
AC_ARG_WITH([aterm],
  [AS_HELP_STRING([--with-aterm=DIR], [use aterm at DIR @<:@find with pkg-config@:>@])],
  [ATERM=$withval])

AC_MSG_CHECKING([whether location of aterm is explicitly set])
if test "${ATERM:+set}" = set; then
  AC_MSG_RESULT([yes])
else
  AC_MSG_RESULT([no])

  PKG_CHECK_MODULES([ATERM],[aterm])
  AC_MSG_CHECKING([prefix of package aterm])
  ATERM=$($PKG_CONFIG --variable=prefix "aterm")
  if test -z "${ATERM}"; then
    AC_MSG_ERROR([package aterm does not specify its prefix in the pkg-config file.
          Report this error to the maintainer of this package.])
  else
    AC_MSG_RESULT([${ATERM}])
  fi
fi
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

PKGS="toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library"
AC_SUBST([PKGS])

PKG_CONFIG_PATH="$(pwd)/sdf-library:$(pwd)/pgen:$(pwd)/asc-support:$(pwd)/tide-support:$(pwd)/sglr:$(pwd)/sdf-support:$(pwd)/asf-support:$(pwd)/pt-support:$(pwd)/error-support:$(pwd)/toolbuslib:$PKG_CONFIG_PATH"
export PKG_CONFIG_PATH

AC_CONFIG_FILES([sdf2-bundle.pc sdf2-bundle.spec Makefile])
AC_OUTPUT

AB_CONFIG_PKG([toolbuslib],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([error-support],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([pt-support],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([asf-support],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([sdf-support],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([sglr],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([tide-support],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([asc-support],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([pgen],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
AB_CONFIG_PKG([sdf-library],[--prefix=${prefix} --with-bundled-packages='toolbuslib error-support pt-support asf-support sdf-support sglr tide-support asc-support pgen sdf-library'  --with-aterm=${ATERM} --with-toolbuslib=${prefix} --with-error-support=${prefix} --with-pt-support=${prefix} --with-asf-support=${prefix} --with-sdf-support=${prefix} --with-sglr=${prefix} --with-tide-support=${prefix} --with-asc-support=${prefix} --with-pgen=${prefix} --with-sdf-library=${prefix}])
