#include "main.h"

/**
 * print_binary - convert to binary
 * @n: - the number to be converted to binary
 *
 * Return: the binary equivalence
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
