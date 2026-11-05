# ft_bzero
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Erases the data in the first n bytes of the memory block starting at the pointer s by writing zeros (`'\0'`) to that area. It is a recreation of the official `bzero` function from the `strings.h` standard library.

While technically deprecated in some modern standards in favor of `memset`, it remains a classic, highly readable function widely used across the *42 curriculum* to completely zero out buffers and structures right after declaration.

## How it works
• Receives a pointer to a memory block (`void *s`) and the number of bytes to clear (`size_t n`).
• Internally, it performs an operation identical to ft_memset(`s`, `0`, `n`).
• Iterates through the first n bytes and overwrites every single one of them with a zero byte.
• Returns nothing (`void`).
