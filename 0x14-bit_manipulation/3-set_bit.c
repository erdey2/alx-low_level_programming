#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * @n: the address of the number
 * @index: the index
 *
 * Return: 1 on success -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *new;

	new = n;
	if (index  > 64)
		return (-1);
	*new |= (1 << index);
	if (*new)
		return (1);
	return (-1);
}
