#include "search_algos.h"
/**
 * interpolation_search - interpolation search
 * @array: list of elements
 * @size: the total elements
 * @value: the element to be searched
 *
 * Return: the index if found -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	bool found;

	if (array == NULL)
		return (-1);
	found = false;
	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) / (
					     array[high] - array[low])) * (value - array[low]));
	while (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
		{
			found = true;
			break;
		}
		else
		{
			if (value > array[pos])
				low = pos + 1;
			else
				high = pos - 1;
			pos = low + (((double)(high - low) / (
							     array[high] - array[low])) * (value - array[low]));
		}
	}
	if (found == true)
		return (pos);
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
