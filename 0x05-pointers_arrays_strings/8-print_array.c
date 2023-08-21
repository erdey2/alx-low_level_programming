#include "main.h"
#include <stdio.h>
/**
 * print_array - print n array elements
 * @a: the array to be printed
 * @n: the size of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count != n - 1)
		{
			printf("%d", a[count]);
			printf(",");
			printf(" ");
		}
		else
		{
			printf("%d", a[count]);
		}
	}
	printf("\n");
}
