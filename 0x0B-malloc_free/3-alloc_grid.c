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

    if (width <= 0 || height <= 0)
    {
        return NULL;
    }

    p = malloc(width * sizeof(int *));
    if (p == NULL)
    {
        return NULL;
    }

    for (i = 0; i < width; i++)
    {
        p[i] = malloc(height * sizeof(int));
        if (p[i] == NULL)
        {
            return NULL;
        }
    }

    for (i = 0; i < width; i++)
    {
        for (j = 0; j < height; j++)
        {
            p[i][j] = 0;
       }
    }

    return p;
}
