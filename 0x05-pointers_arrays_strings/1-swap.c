#include "main.h"
/**
 * swap_int - swap two integers using a pointer
 * @a: the 1st integer to be swaped
 * @b: the 2nd integer to be swaped
 * Return: the swaped numbers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
