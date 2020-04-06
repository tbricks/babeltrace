#ifndef BABELTRACE_BTHACK_CTF_H
#define BABELTRACE_BTHACK_CTF_H

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

#ifdef __cplusplus
extern "C" {
#endif


/* Babeltrace structs opaque to the user */
struct bt_ctf_event;
struct bt_ctf_event_decl;


/* Itiviti inventions */
struct bthack_ctf_persistent_declaration;

const struct bthack_ctf_persistent_declaration *
bthack_ctf_fields_decl_from_event(const struct bt_ctf_event *);

const struct bthack_ctf_persistent_declaration *
bthack_ctf_fields_decl_from_event_decl(const struct bt_ctf_event_decl *);

const char *
bthack_ctf_event_hostname(const struct bt_ctf_event *);


#ifdef __cplusplus
}
#endif

#endif /* BABELTRACE_BTHACK_CTF_H */
