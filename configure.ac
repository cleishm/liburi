dnl Process this file with autoconf to produce a configure script
AC_PREREQ(2.61)
AC_INIT([liburi], [1.0])
AC_CONFIG_SRCDIR([src/uri.h])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_HEADER([config.h])
AM_MAINTAINER_MODE([enable])

GCC_CFLAGS="-pipe -W -Wall -Wno-unused-parameter -Werror \
    -Wpointer-arith -Wstrict-prototypes -Wcast-qual -Wcast-align"

AC_PROG_LIBTOOL
AC_LANG_C
AC_PROG_CC
AC_PROG_CC_C99
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET

AC_HEADER_STDC
AC_C_CONST
AC_C_INLINE
AC_TYPE_SIZE_T

PKG_CHECK_MODULES([CHECK], [check >= 0.9.4], [has_check=yes], [has_check=no])
AM_CONDITIONAL([HAVE_CHECK], [test "X$has_check" = "Xyes"])

if test "X$GCC" = "Xyes"; then
    CFLAGS="$CFLAGS $GCC_CFLAGS"
fi

AC_CONFIG_FILES([Makefile m4/Makefile src/Makefile tests/Makefile])
AC_OUTPUT
