AM_CFLAGS = $(PACKAGE_CFLAGS) -I$(top_srcdir)/include
AM_LDFLAGS = -lpopt

bin_PROGRAMS = babeltrace babeltrace-log

babeltrace_SOURCES = \
	babeltrace.c

# -Wl,--no-as-needed is needed for recent gold linker who seems to think
# it knows better and considers libraries with constructors having
# side-effects as dead code.
babeltrace_LDFLAGS = $(LD_NO_AS_NEEDED)
babeltrace_LDADD = \
	$(top_builddir)/lib/libbabeltrace1tb.la \
	$(top_builddir)/formats/ctf/libbabeltrace1tb-ctf.la \
	$(top_builddir)/compat/libcompat.la \
	$(top_builddir)/formats/ctf-text/libbabeltrace1tb-ctf-text.la \
	$(top_builddir)/formats/ctf-metadata/libbabeltrace1tb-ctf-metadata.la \
	$(top_builddir)/formats/bt-dummy/libbabeltrace1tb-dummy.la \
	$(top_builddir)/formats/lttng-live/libbabeltrace1tb-lttng-live.la

if ENABLE_DEBUG_INFO
babeltrace_LDADD += $(top_builddir)/lib/libdebug-info.la
endif

babeltrace_log_SOURCES = babeltrace-log.c

babeltrace_log_LDADD = \
	$(top_builddir)/lib/libbabeltrace1tb.la \
	$(top_builddir)/formats/ctf/libbabeltrace1tb-ctf.la \
	$(top_builddir)/compat/libcompat.la

if BABELTRACE_BUILD_WITH_LIBUUID
babeltrace_log_LDADD += -luuid
endif
if BABELTRACE_BUILD_WITH_LIBC_UUID
babeltrace_log_LDADD += -lc
endif

if BABELTRACE_BUILD_WITH_MINGW
babeltrace_log_LDADD += -lrpcrt4 -lintl -liconv -lole32 -lpopt -lpthread
babeltrace_LDADD += -lrpcrt4 -lintl -liconv -lole32 -lpopt -lpthread
endif
