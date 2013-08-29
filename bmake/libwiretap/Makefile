.PATH:	${.CURDIR}/../../wiretap

SRCS=	5views.c \
	aethra.c \
	ascendtext.c \
	atm.c \
	ber.c \
	btsnoop.c \
	buffer.c \
	camins.c \
	catapult_dct2000.c \
	commview.c \
	cosine.c \
	csids.c \
	daintree-sna.c \
	dbs-etherwatch.c \
	dct3trace.c \
	erf.c \
	eyesdn.c \
	file_access.c \
	file_wrappers.c \
	hcidump.c \
	i4btrace.c \
	ipfix.c \
	iptrace.c \
	iseries.c \
	k12.c \
	lanalyzer.c \
	libpcap.c \
	merge.c \
	mpeg.c \
	mime_file.c \
	mp2t.c \
	netmon.c \
	netscaler.c \
	netscreen.c \
	nettl.c \
	network_instruments.c \
	netxray.c \
	ngsniffer.c \
	packetlogger.c \
	pcap-common.c \
	pcapng.c \
	peekclassic.c \
	peektagged.c \
	pppdump.c \
	radcom.c \
	snoop.c \
	stanag4607.c \
	tnef.c \
	toshiba.c \
	visual.c \
	vms.c \
	vwr.c \
	wtap.c \
	ascend.y \
	ascend_scanner.l \
	k12text.l

LIB=	wiretap

CFLAGS+=	-I${.CURDIR}/../.. \
		-I${.CURDIR}/../../wiretap \
		-I/usr/local/include/glib-2.0
YFLAGS+=	-p ascend

.include <bsd.lib.mk>
