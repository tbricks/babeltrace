AM_CFLAGS = $(PACKAGE_CFLAGS) -I$(top_srcdir)/include

noinst_LTLIBRARIES = libctf-writer.la

libctf_writer_la_SOURCES = \
	writer.c \
	functor.c

libctf_writer_la_LIBADD = \
	$(top_builddir)/lib/libbabeltrace1tb.la

libctf_writer_la_LDFLAGS = $(LT_NO_UNDEFINED)

if BABELTRACE_BUILD_WITH_LIBUUID
libctf_writer_la_LIBADD += -luuid
endif
if BABELTRACE_BUILD_WITH_LIBC_UUID
libctf_writer_la_LIBADD += -lc
endif
