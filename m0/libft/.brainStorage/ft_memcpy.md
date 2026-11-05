# ft_memcpy
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Copies n bytes from the memory area src to the memory area dest. It is a recreation of the official memcpy function from the `string.h` standard library.

It is a highly critical utility for transferring raw data structures, objects, or arrays across different memory locations instantly, serving as the foundational logic behind high-performance string and data cloning.

## How it works
• Receives a destination pointer (`void *dest`), a source pointer (`const void *src`), and the count of bytes to copy (`size_t n`).
• Typecasts both pointers to unsigned `char*` to allow byte-by-byte memory manipulation.
• Directly copies the contents from src to dest sequentially.
• Returns the original destination pointer dest.
• Note: The memory areas must not overlap. If they do, the behavior is undefined (use ft_memmove for overlapping regions).
