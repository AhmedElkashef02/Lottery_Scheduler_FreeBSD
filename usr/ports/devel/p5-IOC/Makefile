# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: tags/RELEASE_10_3_0/devel/p5-IOC/Makefile 381151 2015-03-12 23:00:02Z adamw $

PORTNAME=	IOC
PORTVERSION=	0.29
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:STEVAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Lightweight IOC (Inversion of Control) framework

BUILD_DEPENDS=	p5-Class-Throwable>=0:${PORTSDIR}/devel/p5-Class-Throwable \
		p5-XML-SAX>=0:${PORTSDIR}/textproc/p5-XML-SAX \
		p5-Class-StrongSingleton>=0:${PORTSDIR}/devel/p5-Class-StrongSingleton \
		p5-Class-Interfaces>=0:${PORTSDIR}/devel/p5-Class-Interfaces
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
