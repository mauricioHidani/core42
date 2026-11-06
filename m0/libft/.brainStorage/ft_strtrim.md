*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Allocates memory and returns a copy of a string with the specified characters removed from the beginning and the end of the text.

Allocates memory (using `malloc(3)`) and returns a copy of `'s1'` with characters from `'set'` removed
from the beginning and the end.

It provides a safe and easy way to sanitize input strings by cleanly stripping out undesired formatting padding, such as extra outer spaces, tabs, or custom brackets, without altering the core content.

## How it works
• Receives a source string (`char const *s1`) and a reference set of characters to strip (`char const *set`).
• Checks the starting position of `s1`, advancing forward as long as the current character is found inside set.
• Checks the ending position of `s1`, moving backward as long as the trailing characters match anything inside set.
• Computes the precise size of the remaining trimmed string slice.
• Allocates memory and copies the remaining inner portion using `ft_substr`.
