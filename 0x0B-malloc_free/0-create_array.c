#include <stdio.h>
#include <stdlib.h>
/**
 **create_array - creates an array of chars
 *@size: array size
 *@c: specific array
 *Return: the address of the created array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n;

	p = malloc(size * sizeof(char));

	if (size == 0)
	{
		p = NULL;

	}
	else
	{
		for (n = 0; n < size; n++)
		{
			*(p + n) = c;
		}
	}
	return (p);
}
