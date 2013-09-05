PROG=	tshark
NO_MAN=

.PATH:	${.CURDIR}/../..
SRCS=	capture_opts.c \
	capture_sync.c \
	tshark-tap-register.c \
	tshark.c \
	${TSHARK_TAP_SRC} \
	${SHARK_COMMON_CAPTURE_SRC} \
	${WIRESHARK_COMMON_SRC}

.PATH:	${.CURDIR}/../../ui/cli
TSHARK_TAP_SRC= \
	tap-afpstat.c \
	tap-ansi_astat.c \
	tap-bootpstat.c \
	tap-camelcounter.c \
	tap-camelsrt.c \
	tap-comparestat.c \
	tap-dcerpcstat.c \
	tap-diameter-avp.c \
	tap-expert.c \
	tap-follow.c \
	tap-funnel.c \
	tap-gsm_astat.c \
	tap-h225counter.c \
	tap-h225rassrt.c \
	tap-hosts.c \
	tap-httpstat.c \
	tap-icmpstat.c \
	tap-icmpv6stat.c \
	tap-iostat.c \
	tap-iousers.c \
	tap-macltestat.c \
	tap-mgcpstat.c \
	tap-megacostat.c \
	tap-protocolinfo.c \
	tap-protohierstat.c \
	tap-radiusstat.c \
	tap-rlcltestat.c \
	tap-rpcstat.c \
	tap-rpcprogs.c \
	tap-rtp.c \
	tap-rtspstat.c \
	tap-scsistat.c \
	tap-sctpchunkstat.c \
	tap-sipstat.c \
	tap-smbsids.c \
	tap-smbstat.c \
	tap-stats_tree.c \
	tap-sv.c \
	tap-wspstat.c

SHARK_COMMON_CAPTURE_SRC= \
	capture_ifinfo.c \
	capture_ui_utils.c

WIRESHARK_COMMON_SRC= \
	capture-pcap-util.c \
	capture-pcap-util-unix.c \
	cfile.c \
	cfutils.c \
	clopts_common.c \
	frame_tvbuff.c \
	sync_pipe_write.c \
	version_info.c

CFLAGS+=	-I${.CURDIR}/../.. \
		-I${.CURDIR}/../../wiretap \
		-I/usr/local/include/glib-2.0

.include <bsd.own.mk>

LDADD+=	-lkrb5 -lm -lpcap -lz \
	-L/usr/local/lib -ladns -lglib-2.0 -lgmodule-2.0 -lGeoIP \
	-L../libui -L${.CURDIR}/../libui -lui

.if ${MK_SOAAP} == "no"
LDADD+=	-L../libwiretap -L${.CURDIR}/../libwiretap -lwiretap \
	-L../libwireshark -L${.CURDIR}/../libwireshark -lwireshark \
	-L../libwsutil -L${.CURDIR}/../libwsutil -l wsutil
.else
.include "${.CURDIR}/../libwiretap/Makefile.src"
.include "${.CURDIR}/../libwireshark/Makefile.src"
.include "${.CURDIR}/../libwsutil/Makefile.src"
.endif

.include <bsd.prog.mk>
