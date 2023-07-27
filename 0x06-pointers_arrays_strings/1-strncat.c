#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes to be used from the src when going into dest.
 * Return: the pointer into the dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
		dest++;
	for (b = 0; b < n; a++, b++)
	{
		src++;
		dest[a] = src[b];
		if (src[b] == '\0')
			break;
	}
	return (dest);
}
