#include "main.h"
/**
 * *_memcpy - Copies the block of n bytes
 * @dest: copt to this
 * @src: copy from
 * @n: block size
 * Return: the address of the copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
