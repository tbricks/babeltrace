AM_CFLAGS = $(PACKAGE_CFLAGS) -I$(top_srcdir)/include

lib_LTLIBRARIES = libbabeltrace1tb-ctf-metadata.la

libbabeltrace1tb_ctf_metadata_la_SOURCES = \
	ctf-metadata.c

# Request that the linker keeps all static libraries objects.
libbabeltrace1tb_ctf_metadata_la_LDFLAGS = \
	$(LT_NO_UNDEFINED) \
	$(LD_NO_AS_NEEDED) -version-info $(BABELTRACE_LIBRARY_VERSION)

libbabeltrace1tb_ctf_metadata_la_LIBADD = \
	$(top_builddir)/lib/libbabeltrace1tb.la
