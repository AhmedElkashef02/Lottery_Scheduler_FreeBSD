# Created by: Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: tags/RELEASE_10_3_0/devel/py-fabric/Makefile 371280 2014-10-20 16:04:12Z mva $

PORTNAME=	fabric
PORTVERSION=	1.9.0
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:C/f/F/}-${DISTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Simple, Pythonic remote execution and deployment

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}paramiko>=1.10:${PORTSDIR}/security/py-paramiko
TEST_DEPENDS:=	${RUN_DEPENDS} \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=0.6:${PORTSDIR}/devel/py-Jinja2 \
		${PYTHON_PKGNAMEPREFIX}fudge>0:${PORTSDIR}/devel/py-fudge \
		${PYTHON_PKGNAMEPREFIX}nose>0:${PORTSDIR}/devel/py-nose

OPTIONS_DEFINE=	TESTS
TESTS_DESC=	Install nose for test suite

TESTS_BUILD_DEPENDS=	${TEST_DEPENDS}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
