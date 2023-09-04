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

	while (str[count] != '\0')
	{
		count++;
	}
	p = malloc((count * sizeof(char)) + 1);
	q = p;

	if (p != NULL)
	{
		if (str == NULL)
		{
			printf("failed to allocate memory\n");
		}
		else
		{
			for (n = 0; n < count; n++)
			{
				*(q + n) = *(str + n);
			}
			*(q + count) = '\0';
		}
	}
	else
	{
		printf("failed to allocate memory\n");
	}
	return (p);
}
