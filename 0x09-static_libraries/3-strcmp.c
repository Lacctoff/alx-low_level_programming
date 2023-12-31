#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int operation;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		operation = *(s1 + i) - *(s2 + i);
		if (operation != 0)
		{
			break;
		}
	}

	return (operation);
}
