# ft_split
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Allocates memory and returns an array of strings obtained by splitting a main string using a specific delimiter character `c`. The array always ends with a `NULL` pointer.

Allocates memory (using `malloc(3)`) and returns an array of strings obtained by splitting `'s'` using the character `'c'` as a delimiter. Each string in the returned array is allocated independently. The array of pointers itself is also allocated dynamically. The returned array must be NULL terminated.

It is the standard approach to break down complex strings into separate individual *tokens* or structured lines, organizing multiple textual elements into an easily accessible list format.

# How it works
• Receives a string to split (`char const *s`) and a delimiter character (`char c`).
• Step 1: Counts how many distinct "words" exist between the delimiters to allocate the initial pointer array.
• Step 2: Loops back through the string to extract each word using ft_substr or memory copies.
• Step 3: Populates the array pointers sequentially with these freshly allocated substrings.
• Note: If any inner allocation fails, it automatically frees all previously allocated words to prevent leaks.
