# $FreeBSD: tags/RELEASE_10_3_0/misc/py-qt5-doc/Makefile 403693 2015-12-13 21:56:50Z rakuco $

PORTNAME=	doc
PORTVERSION=	${PYQT5_VERSION}
CATEGORIES=	misc devel python
MASTER_SITES=	${MASTER_SITES_PYQT5}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}qt5-
DISTNAME=	${PYQT_DISTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for the Qt5 toolkit, documentation

DISTINFO_FILE=	${PYQT_DISTINFO_FILE}
NO_BUILD=	yes

USES=		python pyqt:5
USE_PYQT=	#

DOCSDIR=	${PREFIX}/share/doc/py-qt5

do-install:
	cd ${WRKSRC} &&\
		${MKDIR} ${STAGEDIR}${DOCSDIR} &&\
		${INSTALL_DATA} NEWS LICENSE README\
			${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/doc && ${COPYTREE_SHARE} html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
