#include "search_algos.h"
/**
 * jump_search - jump search
 * @array: list of elements
 * @size: the total elements
 * @value: the element to be found
 * Return: the index of the element or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, step, i;
	bool found;

	found = false;
	low = 0;
	step = sqrt(size);
	high = step;
	i = low;
	while (high <= size - 1)
	{
		if (value == array[low] || value == array[high])
		{
			found = true;
			if (value == array[low])
				i = low;
			else
				i = high;
			break;
		}
		else
		{
			if (value > array[high])
			{
				printf("Value checked array [%ld] = [%d]\n", low, array[low]);
				printf("Value checked array [%ld] = [%d]\n", high, array[high]);
				low = high;
				high += step;
			}
			else
			{
				printf("Value found between indexes[%ld] and [%ld]", low, high);
				printf("\n");
				for (i = low + 1; i < high; i++)
				{
					if (array[i] == value)
						return (i);
				}
			}
		}
	}
	if (found == true)
		return (i);
	else
		return (-1);
}
