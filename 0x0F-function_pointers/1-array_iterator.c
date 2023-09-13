#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Display array elements
 * @size: the name of a person
 * @action: function 
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action) (int))
{
	int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			f(array[i]);
			i++;
		}
	}
}

