# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: tags/RELEASE_10_3_0/net/rubygem-fog-local/Makefile 399455 2015-10-16 13:15:41Z sunpoet $

PORTNAME=	fog-local
PORTVERSION=	0.2.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support local filesystem storage

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fog-core>=1.27:${PORTSDIR}/devel/rubygem-fog-core

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
