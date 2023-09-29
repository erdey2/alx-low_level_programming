#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: the address of the string to be converted
 *
 *Return: the converted string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		       return (0);	
	}
	while (b[i] == '0' || b[i] == '1')
	{
		val = val << 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
