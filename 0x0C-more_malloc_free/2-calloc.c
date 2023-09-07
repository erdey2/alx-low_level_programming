#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate dynamic memory for array
 * * @nmemb: number of count (often 1)
 * * @size: total memory to allocate
 * Return: nmemb * size
 */

void  *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = calloc(nmemb, size);
	if (p == NULL)
	{
		return (NULL);

	}
	return (p);
}

