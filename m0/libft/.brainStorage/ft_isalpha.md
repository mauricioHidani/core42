# ft_isalpha
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Checks whether a specific character is a letter of the alphabet (either uppercase or lowercase). It is a reimplementation of the official `isalpha` function from the standard library `ctype.h`.

It is a fundamental function for data validation and text analysis (*parsing*). It allows you to quickly filter characters before performing operations such as case conversion (`ft_toupper`/`ft_tolower`) or processing text commands.

## How it works
• Takes a character as an argument (passed as an `int`).
• Checks whether the character's value falls within the following ranges of the ASCII table:
	• Uppercase letters: from *‘A’* (*65*) to *‘Z’* (*90*).
    • Lowercase letters: from *‘a’* (*97*) to *‘z’* (*122*).
• Returns a non-zero value usually `1`(*true*) if it is a letter, and `0` (*false*) otherwise.

