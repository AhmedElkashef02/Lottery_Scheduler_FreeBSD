# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: tags/RELEASE_10_3_0/devel/p5-DateTime-Format-Excel/Makefile 373448 2014-11-26 13:08:24Z mat $

PORTNAME=	DateTime-Format-Excel
PORTVERSION=	0.31.00
PORTREVISION=	1
DISTVERSION=	${PORTVERSION:C/\.(..)$//}
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert between DateTime and Excel dates

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
