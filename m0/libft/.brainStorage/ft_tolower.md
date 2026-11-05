# ft_tolower
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Converts an uppercase letter to its corresponding lowercase letter. It is a recreation of the official tolower function from the `ctype.h` standard library.

Just like its counterpart, it is widely used for text normalization. It ensures that user inputs, configuration files, or command arguments can be processed uniformly regardless of how they were typed.

## How it works
• Takes a single character as an argument (passed as an int).
• Checks if the character falls within the uppercase ASCII range: from 'A' (65) to 'Z' (90).
• If it is uppercase, it adds 32 to its ASCII value to shift it to its lowercase equivalent.
• Returns the lowercase character if the conversion was possible; otherwise, it returns the character unchanged.
