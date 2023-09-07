#include <stdio.h>
#include <stdlib.h>

/**
 * mallo_checked - allocates a memory and assigns it a pointer 
 * @b: the size
 * Return: the pointer to the assigned space
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	
	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

