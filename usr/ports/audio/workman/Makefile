# Created by: Donald Burr <d_burr@ix.netcom.com>
# $FreeBSD: tags/RELEASE_10_3_0/audio/workman/Makefile 386312 2015-05-14 10:15:04Z mat $

PORTNAME=	workman
PORTVERSION=	1.3a
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	XCONTRIB/applications/WorkMan
DISTNAME=	WorkMan-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open Look-based CD player tool

LIB_DEPENDS=	libxview.so:${PORTSDIR}/x11-toolkits/xview

WRKSRC=		${WRKDIR}/workman
USES=		imake
USE_XORG=	x11 xext
PLIST_FILES=	bin/workman lib/help/workman.info man/man1/workman.1.gz man/man5/workmandb.5.gz

.include <bsd.port.mk>
