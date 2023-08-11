#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimu value.
 * @max: maximum value.
 * if min > max, returns NULL.
 * if malloc fails, return NULL.
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = (max + 1) - min;
	array = calloc(sizeof(int), size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		array[i] = min;
	return (array);
}
