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
#ifndef URI_H
#define URI_H

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


struct uri *parse_uri(const char *str, const char **endptr);
void free_uri(struct uri *uri);


#endif/*URI_H*/
