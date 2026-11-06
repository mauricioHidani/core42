# ft_strdup
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Duplicates an existing string by allocating a sufficient amount of memory for a copy and copying the contents into it. It is a recreation of the official `strdup` function from the `string.h` standard library.

It provides a reliable way to save, preserve, or pass string data independently within a program, guaranteeing that modifications to the duplicated string will not corrupt or change the original source data.

# How it works
• Receives a pointer to the string to be duplicated (`const char *s1`).
• Calculates the exact length of the string using `ft_strlen` and adds 1 to account for the `NULL terminator`.
• Requests memory dynamically via `malloc` to fit this total length.
• Copies the characters from the original string into the new allocation using `ft_memcpy` and returns the new `string pointer` (or `NULL` if allocation fails).