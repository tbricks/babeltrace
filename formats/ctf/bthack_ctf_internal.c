/*
 * BabelTrace Hooks into CTF format
 *
 * Copyright 2020 Itiviti Group AB, EfficiOS Inc. and Linux Foundation
 *
 * Author: Roman Sayahov <Roman.Sayahov@itiviti.com>
 * Author: Anton Smyk <Anton.Smyk@itiviti.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <babeltrace/bthack_ctf.h>

#include <babeltrace/ctf-ir/metadata.h>
#include <babeltrace/ctf/events-internal.h>

#include <assert.h>


const struct bthack_ctf_persistent_declaration *
bthack_ctf_fields_decl_from_event(const struct bt_ctf_event * event)
{
	assert(NULL != event);
	assert(NULL != event->parent);
	assert(NULL != event->parent->event_fields);
	assert(NULL != event->parent->event_fields->declaration);

	const struct declaration_struct *d =
			event->parent->event_fields->declaration;
	return (const struct bthack_ctf_persistent_declaration *) d;
}


const struct bthack_ctf_persistent_declaration *
bthack_ctf_fields_decl_from_event_decl(const struct bt_ctf_event_decl * decl)
{
	assert(NULL != decl);
	assert(NULL != decl->parent.fields_decl);

	const struct declaration_struct *d =
			decl->parent.fields_decl;
	return (const struct bthack_ctf_persistent_declaration *) d;
}


const char *
bthack_ctf_event_hostname(const struct bt_ctf_event * event)
{
	assert(NULL != event);
	assert(NULL != event->parent);
	assert(NULL != event->parent->stream);
	assert(NULL != event->parent->stream->stream_class);
	assert(NULL != event->parent->stream->stream_class->trace);
	assert(NULL != event->parent->stream->stream_class->trace->env.hostname);

	return event->parent->stream->stream_class->trace->env.hostname;
}
