#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 * Return: two dimensional array as a pointer.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
