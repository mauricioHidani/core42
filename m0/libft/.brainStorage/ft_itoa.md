# ft_itoa
mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Allocates memory and converts an integer value into a null-terminated string representation. It is the inverse operation of ft_atoi.

Allocates memory (using `malloc(3)`) and returns a string representing the integer received as an argument. Negative numbers must be handled.

It bridges the gap between numerical calculations and text outputs, allowing numeric variables to be easily formatted, manipulated as text, or printed out via string-based functions.

## How it works
• Receives an integer (`int n`).
• Handles the edge-case for the lowest possible integer value (`-2147483648`) to avoid overflow issues during conversion.
• Computes the required string length by continuously dividing the number by `10` and noting if a negative sign requires an extra character slot.
• Allocates the exact string buffer size needed with `malloc`.
• populates the string backward by applying modulo operations (`n % 10`) to extract individual digits from right to left.
• Prepends a minus sign `'-'` if the original value was negative.
