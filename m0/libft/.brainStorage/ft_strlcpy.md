# ft_strlcpy

Copies up to dstsize - 1 characters from the NUL-terminated string src to dst, safely NUL-terminating the result. It is a recreation of the BSD-standard strlcpy function from the `string.h` library.

It was designed as a secure, fool-proof replacement for strncpy. It prevents dangerous buffer overflows while making it easy for the developer to detect if the string copy was truncated (by checking if the return value is greater than or equal to dstsize).

## How it works
• Receives a destination buffer (`char *dst`), a source string (`const char *src`), and the total size of the destination buffer (`size_t dstsize`).
• Copies characters from src to dst until it hits dstsize - `1` or encounters a `'\0'`.
• Appends a mandatory `'\0'` at the end of dst (provided dstsize is greater than `0`).
• Returns the total length of the string it tried to create, which is simply the length of src.
