PROG=	minishark
NO_MAN=

.PATH:	${.CURDIR}/../..
SRCS=	capture_opts.c \
	capture_sync.c \
	disabled_protos.c \
	frame_data_sequence.c \
	print.c \
	tempfile.c \
	timestats.c \
	tshark-tap-register.c \
	tshark.c \
	${TSHARK_TAP_SRC} \
	${SHARK_COMMON_CAPTURE_SRC} \
	${WIRESHARK_COMMON_SRC}

.PATH:	${.CURDIR}/../../ui/cli
TSHARK_TAP_SRC= \
	tap-funnel.c \
	tap-hosts.c \
	tap-icmpstat.c \
	tap-icmpv6stat.c \
	tap-stats_tree.c \

SHARK_COMMON_CAPTURE_SRC= \
	capture_ifinfo.c \
	capture_ui_utils.c

WIRESHARK_COMMON_SRC= \
	capture-pcap-util.c \
	capture-pcap-util-unix.c \
	cfile.c \
	cfutils.c \
	clopts_common.c \
	sync_pipe_write.c \
	version_info.c

CFLAGS+=	-DMINISHARK \
		-I${.CURDIR} \
		-I${.CURDIR}/../.. \
		-I${.CURDIR}/../../wiretap \
		-I/usr/local/include/glib-2.0

.include <bsd.own.mk>

LDADD+=	-lkrb5 -lm -lpcap -lz \
	-L/usr/local/lib -ladns -lglib-2.0 -lgmodule-2.0 -lGeoIP \
	-L../libui -L${.CURDIR}/../libui -lui

.if defined(MK_SOAAP) && ${MK_SOAAP} != "no"
.include "${.CURDIR}/../libminitap/Makefile.src"
.include "${.CURDIR}/../libminishark/Makefile.src"
.include "${.CURDIR}/../libwsutil/Makefile.src"
.else
LDADD+=	-L../libminitap -L${.CURDIR}/../libminitap -lminitap \
	-L../libminishark -L${.CURDIR}/../libminishark -lminishark \
	-L../libwsutil -L${.CURDIR}/../libwsutil -l wsutil
.endif

LDADD+=	-L../libairpdcap -L${.CURDIR}../libairpdcap -lairpdcap \
	-L../libwmem -L${.CURDIR}../libwmem -lwmem

.include <bsd.prog.mk>
