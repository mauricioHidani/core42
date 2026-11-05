# ft_memchr
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Searches for the first occurrence of a specific byte `c` within the initial `n` bytes of the memory area pointed to by `s`. It is a recreation of the official memchr function from the `string.h` standard library.

Unlike `ft_strchr`, it does not stop when it encounters a null terminator (`'\0'`). This makes it crucial for searching through raw binary data, network packets, images, or any structure where `'\0'` is considered valid data rather than an end-of-string marker.

## How it works
• Receives a pointer to a memory block (`const void *s`), the byte value to locate (`int c`), and the size of the block to search (`size_t n`).
• Typecasts the memory pointer to an `unsigned char*` to perform a byte-by-byte scan.
• Iterates through exactly `n` bytes of memory. If a byte matches `c` (converted to an unsigned char), it returns a pointer to that exact memory address.
• Returns `NULL` if the byte is not found within the specified `n` bytes boundary.
