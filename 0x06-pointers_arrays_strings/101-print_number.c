#include "main.h"
/**
 * print_number - prints a large number
 * @n: the number to be printed
 * Return: the number
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	x = n;
	if (x / 10)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
