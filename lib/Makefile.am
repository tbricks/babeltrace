SUBDIRS = prio_heap .

AM_CFLAGS = $(PACKAGE_CFLAGS) -I$(top_srcdir)/include

lib_LTLIBRARIES = libbabeltrace1tb.la

libbabeltrace1tb_la_SOURCES = babeltrace.c \
			   iterator.c \
			   context.c \
			   trace-handle.c \
			   trace-collection.c \
			   registry.c \
			   error.c

libbabeltrace1tb_la_LDFLAGS = \
	$(LT_NO_UNDEFINED) -version-info $(BABELTRACE_LIBRARY_VERSION)

if ENABLE_DEBUG_INFO
noinst_LTLIBRARIES = libdebug-info.la

libdebug_info_la_SOURCES = debug-info.c \
			  bin-info.c \
			  dwarf.c \
			  crc32.c \
			  utils.c
libdebug_info_la_LDFLAGS = -lelf -ldw
libdebug_info_la_LIBADD = libbabeltrace1tb.la
endif

libbabeltrace1tb_la_LIBADD = \
	prio_heap/libprio_heap.la \
	$(top_builddir)/types/libbabeltrace1tb_types.la \
	$(top_builddir)/compat/libcompat.la
