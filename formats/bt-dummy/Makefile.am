AM_CFLAGS = $(PACKAGE_CFLAGS) -I$(top_srcdir)/include

lib_LTLIBRARIES = libbabeltrace1tb-dummy.la

libbabeltrace1tb_dummy_la_SOURCES = \
	bt-dummy.c

# Request that the linker keeps all static libraries objects.
libbabeltrace1tb_dummy_la_LDFLAGS = \
	$(LT_NO_UNDEFINED) \
	$(LD_NO_AS_NEEDED) -version-info $(BABELTRACE_LIBRARY_VERSION)

libbabeltrace1tb_dummy_la_LIBADD = \
	$(top_builddir)/lib/libbabeltrace1tb.la
