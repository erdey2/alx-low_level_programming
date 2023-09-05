#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a new space in memory for two dimentional array
 * @width: the number of rows
 * @height: the number of columns
 * Return: the address of a newly created 2-d array
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;
	int size = width * height;

	if (size <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
