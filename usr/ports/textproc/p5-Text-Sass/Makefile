# $FreeBSD: tags/RELEASE_10_3_0/textproc/p5-Text-Sass/Makefile 373448 2014-11-26 13:08:24Z mat $

PORTNAME=	Text-Sass
PORTVERSION=	0.97
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RPETTETT
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl implementation of http://sass-lang.com/

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-Readonly>=1.03:${PORTSDIR}/devel/p5-Readonly \
	p5-Convert-Color>0:${PORTSDIR}/graphics/p5-Convert-Color
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Try-Tiny>0:${PORTSDIR}/lang/p5-Try-Tiny

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
