# ft_toupper
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Converts a lowercase letter to its corresponding uppercase letter. It is a recreation of the official toupper function from the `ctype.h` standard library.

It is essential for standardizing text input, building case-insensitive string comparison algorithms, and parsing command-line tokens or environment variables where case consistency is required.

## How it works
• Takes a single character as an argument (passed as an int).
• Checks if the character falls within the lowercase ASCII range: from 'a' (97) to 'z' (122).
• If it is lowercase, it subtracts 32 from its ASCII value to shift it to its uppercase equivalent.
• Returns the uppercase character if the conversion was possible; otherwise, it returns the character unchanged.
