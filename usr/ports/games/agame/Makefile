# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: tags/RELEASE_10_3_0/games/agame/Makefile 384867 2015-04-27 20:00:20Z amdmi3 $

PORTNAME=	agame
PORTVERSION=	1577
PORTREVISION=	13
CATEGORIES=	games
MASTER_SITES=	http://zevv.nl/play/code/game/ \
		LOCAL/ehaupt
DISTNAME=	game-src-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Simple Tetris-like game

LICENSE=	GPLv2 # or later

USES=		gmake tar:tgz
USE_SDL=	sdl image mixer

WRKSRC=		${WRKDIR}/game

PLIST_FILES=	bin/game
PORTDOCS=	*
PORTDATA=	*

DESKTOP_ENTRIES="game" \
		"A simple tetris-like game" \
		"${DATADIR}/img/icon.png" \
		"game" \
		"Game;BlocksGame;" \
		false

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -Ee 's,wav/|mp3/|img/,${DATADIR}/&,g' ${WRKSRC}/main.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/game ${STAGEDIR}${PREFIX}/bin/
	cd ${WRKSRC} && ${COPYTREE_SHARE} "wav mp3 img" ${STAGEDIR}${DATADIR}/
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.TXT ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
