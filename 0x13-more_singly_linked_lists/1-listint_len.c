#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count the total nodes
 * @h: the address of the first node
 *
 *Return: the total nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
