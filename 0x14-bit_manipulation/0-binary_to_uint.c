#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: the address of the binary number
 *
 * Return: the decimal equvalence or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0;

	if (!b || !*b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] > '1')
			return (0);
		else if(b[i] == '1')
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		i++;
	}
	return (num);

}
