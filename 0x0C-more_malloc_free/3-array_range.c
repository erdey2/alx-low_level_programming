#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * * @min: the minimum number
 * * @max: the maximum number
 * Return: the sorted array
 */

int  *array_range(int min, int max)
{
	int *p, i, count = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
		count++;

	p = calloc(count, sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
