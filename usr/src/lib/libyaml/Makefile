# $FreeBSD: releng/10.3/lib/libyaml/Makefile 256998 2013-10-23 18:07:07Z bdrewery $

LIBYAML=	${.CURDIR}/../../contrib/libyaml

LIB=		yaml
PRIVATELIB=	true
SHLIB_MAJOR=	1
SRCS=		api.c dumper.c emitter.c loader.c \
		parser.c reader.c scanner.c writer.c

.PATH:		${LIBYAML}/src ${LIBYAML}/include

WARNS?=		1
CFLAGS+=	-I${LIBYAML}/include \
		-I${LIBYAML} \
		-I${.CURDIR} \
		-DHAVE_CONFIG_H

.include <bsd.lib.mk>
