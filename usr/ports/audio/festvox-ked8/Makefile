# Created by: trevor
# $FreeBSD: tags/RELEASE_10_3_0/audio/festvox-ked8/Makefile 386312 2015-05-14 10:15:04Z mat $

PORTNAME=	festvox-ked8
PORTVERSION=	1.4.0
PORTREVISION=	1
CATEGORIES=	audio accessibility
MASTER_SITES=	FESTIVAL/1.4.1
DISTNAME=	festvox_kedlpc8k
DIST_SUBDIR=	festival

MAINTAINER=	ports@FreeBSD.org
COMMENT=	American English male voice, sampled at 8 kHz, for Festival

RUN_DEPENDS=	\
${LOCALBASE}/share/festival/lib/dicts/wsj.wp39.poslexR:${PORTSDIR}/audio/festlex-poslex \
${LOCALBASE}/share/festival/lib/dicts/cmu/cmulex.scm:${PORTSDIR}/audio/festlex-cmu

WRKSRC=		${WRKDIR}/festival

CONFLICTS=	festvox-ked16-*

NO_BUILD=	yes

FHOME=		${PREFIX}/share/festival

post-extract:
	@ ${CHMOD} -R a+r ${WRKSRC}
	@ ${FIND} ${WRKSRC} -type d -print0 | ${XARGS} -0 ${CHMOD} 755

do-install:
	@${MKDIR} ${STAGEDIR}${FHOME}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${FHOME}

.include <bsd.port.mk>
