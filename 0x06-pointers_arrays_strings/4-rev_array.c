#include "main.h"
/**
 * reverse_array - Display an array in reverse order
 * @a: the array to be displayed in reverse
 * @n: number of elements to reversed
 *  Return: the reversed array
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

