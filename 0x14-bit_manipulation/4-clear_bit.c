#include "main.h"

/**
 * clear_bit - unset a previously set bit
 * @n: the address of the number
 * @index: the index
 *
 * Return: the address of the changed bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *new;
	
	new = n;

	if (*new &= ~(1 << index))
		return (1);
	else
		return (-1);

}
