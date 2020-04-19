AM_CFLAGS = $(PACKAGE_CFLAGS) -I$(top_srcdir)/include -I$(builddir)

SUBDIRS = types metadata writer ir .

lib_LTLIBRARIES = libbabeltrace1tb-ctf.la

libbabeltrace1tb_ctf_la_SOURCES = \
	bthack_ctf_internal.c \
	ctf.c \
	events.c \
	iterator.c \
	callbacks.c \
	events-private.h

# Request that the linker keeps all static libraries objects.
libbabeltrace1tb_ctf_la_LDFLAGS = \
	$(LT_NO_UNDEFINED) \
	$(LD_NO_AS_NEEDED) -version-info $(BABELTRACE_LIBRARY_VERSION)

libbabeltrace1tb_ctf_la_LIBADD = \
	$(top_builddir)/lib/libbabeltrace1tb.la \
	types/libctf-types.la \
	metadata/libctf-parser.la \
	metadata/libctf-ast.la \
	writer/libctf-writer.la \
	ir/libctf-ir.la

if ENABLE_DEBUG_INFO
libbabeltrace1tb_ctf_la_LIBADD += $(top_builddir)/lib/libdebug-info.la
endif
