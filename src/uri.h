/* vi:set ts=4 sw=4 expandtab:
 *
 * Copyright (C) 2015, Chris Leishman, http://github.com/cleishm
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 */
#ifndef LIBURI_URI_H
#define LIBURI_URI_H

struct uri
{
    char *scheme;
    char *userinfo;
    char *hostname;
    int port;
    char *path;
    char *query;
    char *fragment;
};

/**
 * Parse a URI.
 *
 * @param [str] A pointer to a `NULL` terminated string containing the URI.
 * @param [endptr] A pointer to a char pointer, which will be updated to the
 *         last valid character of the input. If this points to the `NULL`
 *         character, then the entire input was valid.
 * @return A newly allocated `struct uri`.
 */
struct uri *parse_uri(const char *str, const char **endptr);

/**
 * Deallocate a `struct uri`.
 *
 * @param [uri] The `struct uri` to deallocate.
 */
void free_uri(struct uri *uri);

#endif/*LIBURI_URI_H*/
