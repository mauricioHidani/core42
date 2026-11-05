# ft_atoi
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Converts a string representation of an integer into an actual `int` value. It is a recreation of the official `atoi` function from the `stdlib.h` standard library.

It is one of the most famous and essential functions in C for processing user input. Whenever your program receives arguments via `argv` (which always arrive as strings) and needs to use them as mathematical numbers—like grid sizes, timers, or coordinate points, `ft_atoi` makes that translation possible.

## How it works
• Receives a string pointer (`const char *str`).
• Step 1 (Whitespace): Skips any leading whitespaces (like `spaces`, tabs `\t`, or newlines `\n`).
• Step 2 (Sign): Checks for an optional `'+'` or `'-'` sign to determine if the resulting integer is positive or negative.
• Step 3 (Digits): Iterates through the numerical characters (`'0'` to `'9'`), multiplying the previous total by `10` and adding the current digit value.
• Stops processing as soon as it hits a non-digit character and returns the final signed integer.
