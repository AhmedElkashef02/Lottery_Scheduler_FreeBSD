# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: tags/RELEASE_10_3_0/x11/xscreensaver-gnome-hacks/Makefile 367888 2014-09-10 20:50:31Z gerald $

PORTNAME=	xscreensaver-gnome-hacks
PORTREVISION=	2

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Screensaver modules for use with xscreensaver and gnome-screensaver

MASTERDIR=	${.CURDIR}/../xscreensaver-gnome
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

CONFLICTS=	xscreensaver-[0-9]* xscreensaver-gnome-[0-9]*

OPTIONS_DEFINE=	ALL_FORTUNES
ALL_FORTUNES_DESC=	Enable support for all fortunes

USES=		shebangfix
SHEBANG_FILES=	${SS_SCRIPTS:S,^,driver/,}
EXTRA_PATCHES=	${FILESDIR}/extra-patch-nodriver

SS_SCRIPTS=	xscreensaver-getimage-desktop xscreensaver-getimage-file \
		xscreensaver-getimage-video \
		xscreensaver-text
SS_PROGRAMS=	xscreensaver-getimage

post-build:
	@cd ${WRKSRC}/driver && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} \
		Makefile ${MAKE_ARGS} xscreensaver-getimage

post-install-slave:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
.for sf in ${SS_SCRIPTS}
	${INSTALL_SCRIPT} ${WRKSRC}/driver/${sf} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/driver/${sf}.man \
		${STAGEDIR}${MAN1PREFIX}/man/man1/${sf}.1
.endfor
.for sf in ${SS_PROGRAMS}
	${INSTALL_PROGRAM} ${WRKSRC}/driver/${sf} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/driver/${sf}.man \
		${STAGEDIR}${MAN1PREFIX}/man/man1/${sf}.1
.endfor

.include "${MASTERDIR}/Makefile"
