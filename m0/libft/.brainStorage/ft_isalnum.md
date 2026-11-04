# ft_isalnum
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Checks whether a specific character is alphanumeric—that is, whether it is a letter (uppercase or lowercase) or a numeric digit. It is a reimplementation of the official `isalnum` function from the standard library `ctype.h`.

It is widely used in the creation of lexers and parsers, as it allows you to ignore special characters, spaces, and punctuation when isolating words, commands, or configuration variables in a line of text.

## How it works
• Takes a character as an argument (passed as an `int`).
• Combines the validation logic of the previous functions:
    • Checks if it is within the range of letters (`'A'-'Z'` or `'a'-'z'`).
    • Checks if it is within the range of digits (`'0'-'9'`).
• Returns a non-zero value usually `1` (*true*) if it is alphanumeric, and `0` (*false*) otherwise.
