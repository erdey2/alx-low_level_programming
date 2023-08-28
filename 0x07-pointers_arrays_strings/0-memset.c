#include "main.h"
/**
 * *_memset - sets each byte in the block
 * @s: pointed to by
 * @b: to value
 * @n: block size
 * Return: the value p
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
