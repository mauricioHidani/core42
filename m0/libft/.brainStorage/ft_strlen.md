# ft_strlen
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Calculate the length of a string (chain of characters), excluding the terminating *null* character `'\0'`. It is an implementation of the official `strlen` function from the standard `string.h` library.

It is one of libft's most vital functions. It serves as the structural foundation for virtually any other function that needs to manipulate strings, dynamically allocate memory, or validate data.

## How it works
• It takes a pointer to the string `const char *s`.
• It scans the memory character by character starting from the initial address.
• It stops counting as soon as it finds the terminating character `'\0'`.
• It returns the total number of characters found (of type `size_t`).

