PROG=	dumpcap
NO_MAN=

.PATH:	${.CURDIR}/../..
SRCS=	\
	capture_opts.c \
	capture-pcap-util.c \
	capture-pcap-util-unix.c \
	capture_stop_conditions.c \
	cfutils.c \
	clopts_common.c \
	conditions.c \
	dumpcap.c \
	tempfile.c \
	pcapio.c \
	ringbuffer.c \
	sync_pipe_write.c \
	version_info.c \
	ws80211_utils.c

CFLAGS+=	-I${.CURDIR}/../.. \
		-I${.CURDIR}/../../wiretap \
		-I/usr/local/include/glib-2.0
LDADD+=		-lpcap -lz \
		-L/usr/local/lib -lglib-2.0 \
		-L../libwsutil -L${.CURDIR}/../libwsutil -lwsutil

.include <bsd.prog.mk>
