# ft_strncmp
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Compares two strings, `s1` and `s2`, up to a maximum of n characters. It is a recreation of the official strncmp function from the `string.h` standard library.

Unlike `strcmp`, this function is safe because it limits the comparison boundary, preventing it from reading out of bounds. It is the primary tool for verifying command triggers (e.g., checking if a user typed `"exit"` or `"cd"` in your `minishell`).

## How it works
• Receives two strings (`const char *s1`, `const char *s2`) and the maximum number of characters to compare (`size_t n`).
• Iterates through both strings simultaneously, comparing them character by character.
• The loop stops if n characters have been compared, if a mismatch is found, or if the end of either string ('\0') is reached.
• Returns 0 if the strings are identical up to n characters. If they differ, it returns the difference between the first mismatched characters cast as `unsigned char` (`s1[i] - s2[i]`).
