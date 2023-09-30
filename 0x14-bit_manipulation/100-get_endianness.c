#include "main.h"

/**
 * get_endianness - checks whether a given number is bigindian or not
 *
 * Return: 0 if it is big endian 1 othewisew
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
