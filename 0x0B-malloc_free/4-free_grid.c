#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - releases previosly created memory
 * @grid: memory space
 * @height: the number of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
