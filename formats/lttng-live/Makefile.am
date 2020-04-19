AM_CFLAGS = $(PACKAGE_CFLAGS) -I$(top_srcdir)/include -I$(top_builddir)/include -I$(top_srcdir)

lib_LTLIBRARIES = libbabeltrace1tb-lttng-live.la

noinst_HEADERS = \
		 lttng-viewer-abi.h \
		 lttng-live.h

libbabeltrace1tb_lttng_live_la_SOURCES = \
	bthack_live_internal.c \
	bthack_live_internal.h \
	lttng-live-plugin.c lttng-live-comm.c

# Request that the linker keeps all static libraries objects.
libbabeltrace1tb_lttng_live_la_LDFLAGS = \
	$(LT_NO_UNDEFINED) \
	$(LD_NO_AS_NEEDED) -version-info $(BABELTRACE_LIBRARY_VERSION)

libbabeltrace1tb_lttng_live_la_LIBADD = \
	$(top_builddir)/lib/libbabeltrace1tb.la \
	$(top_builddir)/formats/ctf/libbabeltrace1tb-ctf.la
