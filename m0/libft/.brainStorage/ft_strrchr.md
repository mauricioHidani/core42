# ft_strrchr
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Searches for the last occurrence (the rightmost occurrence) of a specific character c in the string pointed to by s. It is a recreation of the official strrchr function from the `string.h` standard library.

It is incredibly useful when you need to parse strings from the end, such as extracting a file extension from a full file path (searching for the last .) or getting the file name out of a directory path (searching for the last `/`).

## How it works
• Receives a pointer to a string (`const char *s`) and a character to find (passed as an `int c`).
• Iterates through the entire string to find its end, keeping track of the last place where the character c matched.
• If a match is found, it updates a pointer to point to that memory location.
• Returns a pointer to the last occurrence of the character, or `NULL` if the character is not found anywhere in the string. (If c is `'\0'`, it returns a pointer to the terminating null byte).
