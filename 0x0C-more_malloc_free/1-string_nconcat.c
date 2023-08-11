#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int i;
	unsigned int len_s1;
	unsigned int len_s2;

	len_s1 = 0;
	len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;

	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;
	output = malloc(sizeof(char) * (len_s1 + n) + 1);

	if (output == NULL)
		return (NULL);

	if (n >= len_s2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[len_s1 + i] = s2[i];
		output[len_s1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[len_s1 + i] = s2[i];
		output[len_s1 + i] = '\0';
	}
	return (output);
}
