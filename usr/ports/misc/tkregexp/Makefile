# Created by: Patrick Seal <patseal@hyperhost.net>
# $FreeBSD: tags/RELEASE_10_3_0/misc/tkregexp/Makefile 398833 2015-10-08 15:12:22Z olgeni $

PORTNAME=	tkregexp
PORTVERSION=	3.1
CATEGORIES=	misc tk
MASTER_SITES=	http://laurent.riesterer.free.fr/regexp/
DISTNAME=	visual_regexp-${PORTVERSION}
EXTRACT_SUFX=	.tcl
EXTRACT_ONLY=

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	Interactive regexp design tool

USES+=		dos2unix tk
DOS2UNIX_FILES=	visual_regexp-${PORTVERSION}.tcl
NO_BUILD=	yes
PLIST_FILES=	bin/tkregexp

WRKSRC=		${WRKDIR}

post-extract:
	${CP} ${DISTDIR}/${DISTFILES} ${WRKDIR}

post-patch:
	${REINPLACE_CMD} -e "1s|^\(.*\)|#!${WISH}|; 2d" ${WRKDIR}/visual_regexp-${PORTVERSION}.tcl

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/visual_regexp-${PORTVERSION}.tcl ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
