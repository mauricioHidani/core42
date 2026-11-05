# ft_strchr
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Searches for the first occurrence of a specific character c in the string pointed to by s. It is a recreation of the official strchr function from the `string.h` standard library.

It is the standard building block for string searching, parsing delimiters (like looking for a / or a spaces in a path or command), and checking if a character belongs to a specific set of allowed symbols.

## How it works
• Receives a pointer to a string (const char *s) and a character to look for (passed as an int c).
• Iterates through the string character by character, comparing each one to c (cast to a char).
• If a match is found, it immediately returns a pointer to that specific memory address within the string.
• If it reaches the end of the string without finding a match, it checks if c is the NUL terminator ('\0'). If so, it returns a pointer to the terminator; otherwise, it returns NULL.