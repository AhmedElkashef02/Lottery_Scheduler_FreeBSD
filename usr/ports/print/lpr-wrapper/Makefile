# Created by: e-masson@kisoft-services.com
# $FreeBSD: tags/RELEASE_10_3_0/print/lpr-wrapper/Makefile 395047 2015-08-22 17:48:35Z hrs $

PORTNAME=	lpr-wrapper
PORTVERSION=	0.7
PORTREVISION=	3
CATEGORIES=	print
MASTER_SITES=	http://www.mathstat.dal.ca/~selinger/lpr-wrapper/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	User level printer frontend

RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash \
		ppdfilt:${PORTSDIR}/print/libppd \
		psdim:${PORTSDIR}/print/psdim \
		mpage:${PORTSDIR}/print/mpage \
		pstops:${PORTSDIR}/print/psutils

USES=		ghostscript:run shebangfix
SHEBANG_FILES=	lpr-wrapper.in lpr-wrapper-cups.in lpr-wrapper-features
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}

PLIST_FILES=	bin/lpr-wrapper bin/lpr-wrapper-cups bin/lpr-wrapper-features

.include <bsd.port.mk>
