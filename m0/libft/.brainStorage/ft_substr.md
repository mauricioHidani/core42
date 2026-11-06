# ft_substr
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>


Allocates memory (using `malloc(3)`) and returns a substring from the string `'s'`. The substring starts at index `'start'` and has a maximum length of `'len'`.

It streamlines the process of breaking down strings into smaller chunks, providing safe out-of-bounds protection and handling memory allocation automatically in a single function call.

## How it works
• Receives the source string (`char const *s`), the starting index (`unsigned int start`), and the maximum length of the substring (`size_t len`).
• Validates boundaries: if start is beyond the actual length of `s`, it safely returns an empty, allocated string.
• Adjusts len if the remaining characters in `s` are fewer than requested, ensuring no over-allocation.
• Allocates memory with malloc, copies the requested section using `ft_strlcpy`, and appends the `NULL` terminator.
