# ft_memcmp
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Compares the first `n` bytes of two memory areas, `s1` and `s2`. It is a recreation of the official `memcmp` function from the `string.h` standard library.

Unlike `ft_strncmp`, it does not stop at a null terminator (`'\0'`). This makes it the absolute standard for comparing complex structs, raw binary files, or data arrays where zero bytes are part of the actual payload.

## How it works
• Receives two pointers to memory blocks (`const void *s1`, `const void *s2`) and the number of bytes to compare (`size_t n`).
• Casts both pointers to unsigned `char*` to read and compare the raw data byte by byte.
• Loops through the memory areas sequentially. If it encounters a mismatch, it stops and returns the difference between the two bytes (`s1[i] - s2[i]`).
• Returns `0` if all n bytes in both memory areas are identical.
