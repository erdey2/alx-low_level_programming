#include "main.h"

/**
 * flip_bits - display the number of changed bits.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, result;
	unsigned int i, j;

	j = 0;
	result = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (diff & result))
			j++;
		result <<= 1;
	}

	return (j);
}
