# Created by: Christian Brueffer <chris@unixpages.org>
# $FreeBSD: tags/RELEASE_10_3_0/security/cp2fwb/Makefile 363374 2014-07-29 19:11:51Z adamw $

PORTNAME=	cp2fwb
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}uilder/${PORTNAME}uilder/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Checkpoint FW1 to Firewall Builder ruleset converter

RUN_DEPENDS=	p5-XML-Writer>=0:${PORTSDIR}/textproc/p5-XML-Writer

PLIST_FILES=	bin/cp2fwbuilder
USES=		perl5 shebangfix tar:tgz
NO_BUILD=	yes

SHEBANG_FILES=	cp2fwbuilder

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/cp2fwbuilder ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
