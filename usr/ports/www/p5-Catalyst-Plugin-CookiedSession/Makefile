# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: tags/RELEASE_10_3_0/www/p5-Catalyst-Plugin-CookiedSession/Makefile 373448 2014-11-26 13:08:24Z mat $

PORTNAME=	Catalyst-Plugin-CookiedSession
PORTVERSION=	0.35
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Catalyst Plugin for storing sessions in a browser cookie

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-Crypt-CBC>=0:${PORTSDIR}/security/p5-Crypt-CBC \
		p5-Crypt-Rijndael>=0:${PORTSDIR}/security/p5-Crypt-Rijndael \
		p5-JSON-XS-VersionOneAndTwo>=0:${PORTSDIR}/converters/p5-JSON-XS-VersionOneAndTwo \
		p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
