#include "main.h"

/**
 * malloc_checked - allocates memory to a given input.
 * @b: amount of bytes.
 * if malloc fails, an exit should be called with a value of 98.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *memory_ptr;

	memory_ptr = malloc(b);

	if (memory_ptr == NULL)
		exit(98);
	return (memory_ptr);
}
