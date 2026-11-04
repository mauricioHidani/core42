# ft_isdigit
*mhidani - 42 São Paulo*<br>
*Wednesday, 24 July 2024 - São Paulo, Brazil*<br>

Checks whether a specific character is a numeric digit from `0` to `9`. It is a reimplementation of the official `isdigit` function from the standard library `ctype.h`.

It is essential for validating inputs that must contain only numbers. It serves as the first security filter in text-to-number conversion algorithms and is the direct basis for building the well-known `ft_atoi` function (String to Integer).

## How it works
• Takes a character as an argument (passed as an `int`).
• Checks whether the character’s value falls within the numeric range of the ASCII table:
    • Digits from *'0'* (*48*) to *'9'* (*57*).
• Returns a nonzero value usually `1` (*true*) if it is a digit, and `0` (*false*) otherwise.

