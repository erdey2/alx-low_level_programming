#include "main.h"
#include <math.h>

/**
 * print_binary - prints a binary equivalent
 * @n: the number to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int num;

	i = 63;
	while (i >= 0)
	{
		num = n >> i;
		
		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
		i--;
	}
	if (!count)
		_putchar('0');
}
