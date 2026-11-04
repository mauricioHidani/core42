# ft_isprint
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Checks whether a specific character is printable—that is, whether it occupies visible space on the screen (including the space character). It is a reimplementation of the official `isprint` function from the standard library `ctype.h`.

It is essential when you need to display data safely on the terminal without cluttering the screen with invisible characters or control commands that alter the prompt’s behavior. It is very useful at the start of the `ft_printf` project and for sanitizing text logs.

## How it works
• Takes a character as an argument (passed as an `int`).
• Checks whether the character’s value falls within the printable range of the ASCII table:
    • Starts at the space character `‘' '` (decimal value `32`).
	• It goes up to the tilde character `~` (decimal value `126`).
• It returns a non-zero value usually `1` (*true*) if the character is printable, and `0` (*false*) otherwise (excluding control characters such as `\n`, `\t`, or `DEL`).
