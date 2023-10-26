#include "main.h"

/**
 * flip_bits - calculate the number of flips
 * @n: the first number
 * @m: the second number
 *
 * Return: number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int changes;

	changes = n ^ m;
	while (changes)
	{
		count = count + & 1;
		changes >>= 1;
	}
	return (count);

}
