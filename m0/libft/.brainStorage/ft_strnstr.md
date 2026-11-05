# ft_strnstr
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Locates the first occurrence of a null-terminated substring `needle` within a larger string `haystack`, searching no more than `len` characters. It is a recreation of the BSD-standard `strnstr` function from the `string.h` library.

It is a safe substring search tool that prevents out-of-bounds reading by enforcing a character limit. It is heavily utilized when parsing network protocols, specific data streams, or custom configuration files.

## How it works
• Receives the main string (`const char *haystack`), the substring to find (`const char *needle`), and the search limit boundary (`size_t len`).
• If `needle` is an empty string, it immediately returns `haystack`.
• Iterates through `haystack`, checking if the characters match `needle`. The match must fully fit within the first `len` characters of `haystack` (including its own start position).
• Returns a pointer to the first character of the located substring within `haystack`, or `NULL` if the substring is not found.
