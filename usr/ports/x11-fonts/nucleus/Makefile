# $FreeBSD: tags/RELEASE_10_3_0/x11-fonts/nucleus/Makefile 381876 2015-03-21 23:05:19Z bapt $

PORTNAME=	nucleus
PORTVERSION=	0.77
PORTREVISION=	5
CATEGORIES=	x11-fonts
MASTER_SITES=	SF/xfonts/OldFiles

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Another font package for X

USES=		fonts

BUILD_DEPENDS=	bdftopcf:${PORTSDIR}/x11-fonts/bdftopcf

WRKSRC=		${WRKDIR}/${PORTNAME}

do-build:
	@cd ${WRKSRC}/src && ./compile

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}/*.gz ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
