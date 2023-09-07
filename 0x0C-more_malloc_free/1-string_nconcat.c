#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings 
 * @s1: the first string
 * @s2: the 2nd string
 * @n: the number of chars to be copied
 * Return: the address of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *p;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
		;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
		;
	}
	if (y > n)
		y = n;
	p = malloc(sizeof(char) * (x + y + 1));
	if (p == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		p[z] = s1[z];
	for (z = 0; z < y; z++)
		p[z + x] = s2[z];
	p[x + y] = '\0';

	return (p);
}

