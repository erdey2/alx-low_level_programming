#include "main.h"

/**
 * get_bit - get the bit at the given index
 * @n: - the number
 * @index: - the index
 *
 * Return: the value of the bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
	{
		return (1);
	}
	else
		return (0);
	if (!(n & (1 << index)))
		return (-1);

}
