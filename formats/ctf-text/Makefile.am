AM_CFLAGS = $(PACKAGE_CFLAGS) -I$(top_srcdir)/include

SUBDIRS = types .

lib_LTLIBRARIES = libbabeltrace1tb-ctf-text.la

libbabeltrace1tb_ctf_text_la_SOURCES = \
	ctf-text.c

libbabeltrace1tb_ctf_text_la_LDFLAGS = \
	$(LT_NO_UNDEFINED) \
	$(LD_NO_AS_NEEDED) -version-info $(BABELTRACE_LIBRARY_VERSION) \
	types/libctf-text-types.la

libbabeltrace1tb_ctf_text_la_LIBADD = \
	$(top_builddir)/lib/libbabeltrace1tb.la \
	$(top_builddir)/formats/ctf/libbabeltrace1tb-ctf.la

if ENABLE_DEBUG_INFO
libbabeltrace1tb_ctf_text_la_LIBADD += $(top_builddir)/lib/libdebug-info.la
endif
