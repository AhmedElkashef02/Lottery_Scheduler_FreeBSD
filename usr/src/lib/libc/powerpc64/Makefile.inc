# $FreeBSD: releng/10.3/lib/libc/powerpc64/Makefile.inc 246117 2013-01-30 12:48:16Z kib $

SRCS+=	__vdso_gettc.c

# Long double is 64-bits
MDSRCS+=machdep_ldisd.c
SYM_MAPS+=${.CURDIR}/powerpc64/Symbol.map
