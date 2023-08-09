#include "main.h"

/**
 * my_strlen - gets the length of a string array.
 * @str: the string array.
 *
 * Return: length of the string.
 */


int my_strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	int totalLength = 0;
	int outputIndex = 0;
	int i;
	int j;
	char *output;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		totalLength += my_strlen(av[i]) + 1;
	}

	output = malloc(totalLength + 1);
	if (output == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[outputIndex++] = av[i][j];
		}
		output[outputIndex++] = '\n';
	}
	output[totalLength] = '\0';

	return (output);
}
