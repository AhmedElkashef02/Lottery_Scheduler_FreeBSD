# $FreeBSD: tags/RELEASE_10_3_0/www/p5-GunghoX-FollowLinks/Makefile 373448 2014-11-26 13:08:24Z mat $

PORTNAME=	GunghoX-FollowLinks
PORTVERSION=	0.00006
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DMAKI
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to follow links within responses for Gungho

RUN_DEPENDS=	\
	p5-Gungho>=0.09.005:${PORTSDIR}/www/p5-Gungho \
	p5-HTML-Parser>0:${PORTSDIR}/www/p5-HTML-Parser \
	p5-HTML-Tagset>0:${PORTSDIR}/www/p5-HTML-Tagset \
	p5-MIME-Types>0:${PORTSDIR}/mail/p5-MIME-Types \
	p5-Sub-Exporter>0:${PORTSDIR}/devel/p5-Sub-Exporter \
	p5-URI-Match>0:${PORTSDIR}/net/p5-URI-Match
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Class-Null>0:${PORTSDIR}/devel/p5-Class-Null

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
