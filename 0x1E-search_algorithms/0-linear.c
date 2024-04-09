#include "search_algos.h"
/**
 * linear_search - linear search
 * @array: the list of elements
 * @size: the size of the list
 * @value: the element to be searched
 *
 * Return: the index of the element otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	bool found;
	size_t i;

	found = false;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		printf("\n");
		if (value == array[i])
		{
			found = true;
			break;
		}
	}
	if (found == false)
		return (-1);
	else
		return (i);
}
