# Created by: Mezz <mezz@FreeBSD.org>
# $FreeBSD: tags/RELEASE_10_3_0/graphics/cbview/Makefile 404987 2016-01-01 12:08:01Z rakuco $

PORTNAME=	cbview
PORTVERSION=	0.06
PORTREVISION=	9
CATEGORIES=	graphics perl5
MASTER_SITES=	http://www.sourcefiles.org/Toys/Humor/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Viewer/converter for CBR/CBZ comic book archives

LICENSE=	GPLv2

RUN_DEPENDS=	unrar:${PORTSDIR}/archivers/unrar \
		unzip:${PORTSDIR}/archivers/unzip \
		p5-Gtk2>=0:${PORTSDIR}/x11-toolkits/p5-Gtk2 \
		p5-String-ShellQuote>=0:${PORTSDIR}/textproc/p5-String-ShellQuote

NO_BUILD=	yes
USES=		perl5 shebangfix
SHEBANG_FILES=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}

PORTDOCS=	Changes README TODO
OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
