#include "main.h"

/**
 * _memcpy - copies the memory area,
 * @dest: destination area.
 * @src: source mem area.
 * @n: number of bytes.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
