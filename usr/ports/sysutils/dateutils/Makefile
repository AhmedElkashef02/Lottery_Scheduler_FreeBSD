# $FreeBSD: tags/RELEASE_10_3_0/sysutils/dateutils/Makefile 349469 2014-03-28 22:24:15Z jhale $

PORTNAME=	dateutils
PORTVERSION=	0.2.7
CATEGORIES=	sysutils
MASTER_SITES=	https://bitbucket.org/hroptatyr/dateutils/downloads/

MAINTAINER=	jessefrgsmith@yahoo.ca
COMMENT=	Command line utilities for working with dates

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	help2man:${PORTSDIR}/misc/help2man

USES=		tar:xz
GNU_CONFIGURE=	yes

INFO=		dateutils

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|@libdir@/pkgconfig|$${prefix}/libdata/pkgconfig|g' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
