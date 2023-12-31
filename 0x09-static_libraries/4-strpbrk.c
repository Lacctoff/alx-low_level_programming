#include "main.h"

/**
 * _strpbrk - searches for a string for any of a set of bytes.
 * @s: first occurence in the string.
 * @accept: second occurence.
 * Return: returns matching set in accept or NULL if there is none.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
