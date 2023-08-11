#include "main.h"

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory block.
 * Returns NULL if nmemb or size is 0.
 * Returns NULL if memory allocation with malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);

	if (output == NULL)
		return (NULL);
	return (output);
}
