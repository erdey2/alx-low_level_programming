#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Find index of a given element
 * @array: the array
 * @size: array size
 * @cmp: pointer function
 * Return: if found return the index or -1 otherwise
 */

int int_index(int *array, int size, int (*cmp) (int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}

