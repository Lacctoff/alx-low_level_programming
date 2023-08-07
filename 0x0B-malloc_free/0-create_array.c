#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storage of the character.
 * Return: pointer of an array of characters.
 */

char *create_array(unsigned int size, char c)
{
	char *cARR;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	cARR = malloc(sizeof(char) * size);

	if (cARR == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		cARR[i] = c;
	}
	return (cARR);
}
