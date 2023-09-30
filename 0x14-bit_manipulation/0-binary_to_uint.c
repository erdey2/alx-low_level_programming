#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: the address of the string to be converted
 *
 *Return: the converted string
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j = j << 1;
		if (b[i] == '1')
			j = j + 1;
	}
	return (j);
}
