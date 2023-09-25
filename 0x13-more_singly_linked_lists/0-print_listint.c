#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements
 * @h: the address of the node
 *
 *Return: the len of the nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);

}
