# ft_strjoin
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Allocates memory (using `malloc(3)`) and returns a new string, which is the result of *concatenating* `'s1'` and `'s2'`.

It simplifies the process of merging distinct textual components together dynamically into a single, cohesive string block while abstracting away manual length checks and dual allocation tasks.

## How it works
• Receives two strings (`char const *s1` and `char const *s2`).
• Checks if either input is `NULL` to ensure safe operation.
• Calculates the combined length of both strings using `ft_strlen`.
• Allocates the total required memory using `malloc` (including space for the `'\0'`).
• Copies `s1` into the new memory space and then appends `s2` right after it using `ft_strlcpy` and `ft_strlcat`.
• Returns the newly created string, or `NULL` if allocation fails.
