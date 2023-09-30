#include "main.h"

/**
 * set_bit - sets a bit at particular position
 * @n: pointer to a string
 * @index: the position of the bit
 *
 * Return: 1 if it works -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
