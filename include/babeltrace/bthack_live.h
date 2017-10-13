#ifndef BABELTRACE_BTHACK_LIVE_H
#define BABELTRACE_BTHACK_LIVE_H

/*
 * BabelTrace Hooks into Live Feed
 *
 * Copyright 2020 Itiviti Group AB, EfficiOS Inc. and Linux Foundation
 *
 * Author: Evgeniy Osipov <Evgeniy.Osipov@itiviti.com>
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

#ifdef __cplusplus
extern "C" {
#endif


/* Babeltrace structs opaque to the user */
struct bt_context;
struct bt_ctf_event;


/* Itiviti inventions */

/* Define enum identical to lttng_viewer_seek since header file
 * `lttng-viewer-abi.h` is not one of public Babeltrace headers.
 */
enum bthack_live_seek {
		BTHACK_LIVE_SEEK_BEGIN = 1,
		BTHACK_LIVE_SEEK_LAST = 2,
};

enum bthack_live_seek
bthack_live_seek_get(void);

void
bthack_live_seek_set(
		enum bthack_live_seek new_seek);


extern int
(*bthack_live_callback_declaration)(
		struct bt_context *,
		int handle_id);

extern int
(*bthack_live_callback_event)(
		const struct bt_ctf_event *);


#ifdef __cplusplus
}
#endif

#endif /* BABELTRACE_BTHACK_LIVE_H */
