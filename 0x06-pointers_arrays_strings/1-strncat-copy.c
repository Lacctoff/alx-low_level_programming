#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i;

	for (; *(dest + count) != '\0'; count++)
	{}
	for (i = 0; i < n; i++)
	{
		*(dest + count) = *(src + i);
		if (*(src + i) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
