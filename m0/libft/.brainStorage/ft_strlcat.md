# ft_strlcat
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Appends the NUL-terminated string src to the end of dst, ensuring the final string is safely NUL-terminated and does not exceed the absolute buffer size. It is a recreation of the BSD-standard strlcat function from the `string.h` library.

Just like strlcpy, it fixes the inherent safety issues of older functions like strncat. It guarantees proper null-termination under all conditions and provides a precise return value to let you easily track if your string concatenation ran out of buffer space.

## How it works
• Receives a destination buffer (`char *dst`), a source string (`const char *src`), and the full size of the destination buffer (`size_t dstsize`).
• Measures the initial length of dst (let's call it dst_len).
• If dstsize is less than or equal to dst_len, it stops and returns `dstsize + ft_strlen(src)`.
• Otherwise, it appends characters from src right after the existing characters in dst, stopping at dstsize - 1 to leave room for the final '\0'.
• Returns the total length of the string it tried to create: the initial length of dst plus the length of src.
