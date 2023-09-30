#include "main.h"

/**
 * find_power - calculate the power of a given number
 * @base: base of the exponet
 * @pow: power of the exponet
 *
 * Return: value of base and power
 */
unsigned long int find_power(unsigned int base, unsigned int pow)
{
	unsigned long int num = 1;
	unsigned int i = 0;
	
	while (i <= pow)
	{
		num = num * base;
		i++;
	}
	return (num);
}

/**
 * print_binary - prints a binary equivalent
 * @n: the number to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int num, result;
	char symbol;

	symbol = 0;
	num = find_power(2, sizeof(unsigned long int) * 8 - 1);

	while (num != 0)
	{
		result = n & num;
		if (result == num)
		{
			symbol = 1;
			_putchar('1');

		}
		else if (symbol == 1 || num == 1)
		{
			_putchar('0');
		}
		num >>= 1;
	}

}
