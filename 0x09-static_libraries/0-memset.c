#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer that points to the memory area
 * @b: constant byte.
 * @n: number of bytes filled.
 * Return: the pointer to the destination.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
