#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - creates a new space in memory and return the addresss of that
 * @str: the address of the string to be retured
 * Return: the address of a newly created space in memory
 */

char *_strdup(char *str)
{
	char *p, *q;
	unsigned int count = 0, n;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}
	p = malloc((count * sizeof(char)) + 1);
	q = p;

	if (p == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < count; n++)
	{
		*(q + n) = *(str + n);
	}
	*(q + count) = '\0';

	return (p);
}
