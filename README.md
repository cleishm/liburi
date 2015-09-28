liburi is a simple parser for URIs, as described in
[RFC 2396](https://www.ietf.org/rfc/rfc2396.txt)
(and IPv6 extensions from [RFC 2732](https://www.ietf.org/rfc/rfc2732.txt)).

Currently, liburi handles only absolute hierarchial URIs. Pull requests
adding support for relative URIs are welcomed.

Liburi presents two methods:

```
struct uri *parse_uri(const char *str, const char **endptr);
```

and

```
void free_uri(struct uri *uri);
```

The `parse_uri` function parses a string containing a URI, and, if successful,
returns a newly allocated `struct uri`. The memory allocated for this may be
later released using the `free_uri` function.

The second argument to `parse_url` is optional, and may be left as `NULL`.
If it is supplied, the address of the first invalid character encountered
during a parse error will be stored into `*endptr`. Thus, if `*str` is
not `'\0'` but `**endptr` is `'\0'` on return, the entire string was valid.
