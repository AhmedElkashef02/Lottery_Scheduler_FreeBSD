# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: tags/RELEASE_10_3_0/converters/p5-PerlIO-via-Unidecode/Makefile 373448 2014-11-26 13:08:24Z mat $

PORTNAME=	PerlIO-via-Unidecode
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Perlio layer for Unidecode

BUILD_DEPENDS=	p5-Text-Unidecode>=0:${PORTSDIR}/converters/p5-Text-Unidecode
RUN_DEPENDS=	p5-Text-Unidecode>=0:${PORTSDIR}/converters/p5-Text-Unidecode

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
