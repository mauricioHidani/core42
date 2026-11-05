# ft_menset
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Fills the first `n` bytes of the memory area pointed to by s with the constant byte `c`. It is a recreation of the official memset function from the `string.h` standard library.

It is the standard and most efficient way to initialize or clear structures, arrays, and newly allocated memory buffers (`malloc`) before using them, preventing bugs caused by uninitialized "*garbage*" data in memory.

• Receives a pointer to a memory block `void *s`, a value converted to an unsigned char `int c`, and the number of bytes to fill `size_t n`.
• Iterates through the memory byte by byte, casting the pointer to a byte-sized type (`unsigned char*`).
• Writes the value c into each of the n byte locations.
• Returns the original pointer `s`.
