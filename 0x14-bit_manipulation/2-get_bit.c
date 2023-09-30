#include "main.h"

/**
 * get_bit - display the value of a bit at a given index.
 * @n: number of bits
 * @index: the position of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask = 1 << index;
	res = n & mask;
	if (res == mask)
		return (1);

	return (0);
}
