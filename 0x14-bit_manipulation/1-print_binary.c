#include "main.h"

/**
 * print_binary - convert to binary
 * @n: - the number to be converted to binary
 *
 * Return: the binary equivalence
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 63; i >= 0; i--)
	{
		if (n & (1 << i))
			_putchar('1');
		else if (n & (1 << i))
			_putchar('0');
	}
}
