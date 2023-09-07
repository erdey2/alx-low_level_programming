#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: the address of the assigned block
 * @old_size: the old assigned block
 * @new_size: the new size to be reassigned
 * * Return: memory address of the new block
 */

void  *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, min;
	char *p;
	char *ptr2 = (char *)ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = realloc(ptr, new_size);
	if (p == NULL)
		return (NULL);
	if (old_size <= new_size)
		min = old_size;
	else
		min = new_size;
	if (!(new_size > old_size))
	{
		for (i = *ptr2; i <= min; i++)
		p[i] = ptr2[i];
	}
	return (p);
}
