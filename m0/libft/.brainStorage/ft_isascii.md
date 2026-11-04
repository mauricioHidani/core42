# ft_isascii
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Checks whether a specific character belongs to the standard ASCII table, which comprises values between `0` and `127`. It is a reimplementation of the official `isascii` function from the standard `ctype.h` library.

It is crucial for ensuring code portability and security, acting as a validation barrier against extended characters, corrupted bytes, non-standard accents, or special characters from other encodings (such as `UTF-8` or `ISO-8859`) that could break the behavior of functions expecting only pure ASCII text.

How it works:
• Takes a character or numeric value as an argument (passed as an `int`).
• Checks whether the value falls within the valid range of characters in the 7-bit ASCII table (`0` through `127`).
• Returns a non-zero value usually `1` (*true*) if the character is within the valid range, and `0` (*false*) otherwise.
