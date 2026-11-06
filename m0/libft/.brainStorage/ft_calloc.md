# t_calloc
*mhidani - 42 São Paulo*<br>
*Thursday, 24 July 2025 - São Paulo, Brazil*<br>

Allocates a block of memory for an array of elements, dynamic in size, and initializes all its bytes to `zero`. It is a recreation of the official `calloc` function from the `stdlib.h` standard library.

It acts as a safer alternative to a raw `malloc` because it automatically eliminates any residual data (`garbage memory`) that could cause unpredictable bugs or undefined behavior when accessing the newly allocated array.

## How it works
• Receives the number of elements (`size_t count`) and the size of each element in bytes (`size_t size`).
• Calculates the total memory required (`count * size`) and secures it using `malloc`.
• Uses zero-initialization (similar to `ft_bzero`) to clear out the entire newly allocated memory block.
• Returns a *generic pointer* (`void *`) to the allocated memory, or `NULL` if the allocation fails.
