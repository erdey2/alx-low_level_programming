#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints the total elements
 * @h: the address of the node to be printed
 *
 * Return: the size_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h ->next != NULL)
	{
		count++;
		h->next;
	}
	return (count);
}
