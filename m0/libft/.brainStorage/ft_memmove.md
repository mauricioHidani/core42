# ft_memmove

Copies n bytes from memory area src to memory area dest. Unlike ft_memcpy, it safely handles overlapping memory regions. It is a recreation of the official memmove function from the `string.h` standard library.

It is the gold standard for shifting data within the same array or buffer (e.g., deleting a character in a string or inserting elements in an array), ensuring that memory corruption never happens due to overlapping reads and writes.

## How it works
• Receives a destination pointer (`void *dest`), a source pointer (`const void *src`), and the number of bytes to copy (`size_t len`).
• Checks if dest is greater than src while overlapping.
• If they overlap and dest is further ahead, it copies the bytes backwards (from end to start) to prevent overwriting source data before it gets copied.
• If they do not overlap (or if dest is before src), it copies forwards just like memcpy.
• Returns the original pointer dest.
