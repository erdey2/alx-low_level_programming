#include "search_algos.h"
/**
 * binary_search - binary search
 * @array: the list of elements
 * @size: the size of the list
 * @value: the element to be searched
 *
 * Return: the index of the element otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int first, mid, last, i;
	bool found;

	found = false;
	first = 0;
	last = size - 1;
	while (first <= last)
	{
		printf("Searching in array:");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d", array[i]);
		
                printf("\n");
		mid = (first + last) / 2;	
		if (value == array[mid])
		{
			found = true;
			break;
		}
		else
		{
			if (value < array[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	if (found == true)
	{
		return (mid);
	}
	else
		return (-1);
}
