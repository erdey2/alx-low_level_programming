#include "lists.h"

/**
 * print_dlistint - print the total nodes
 * @h: the address of the first node
 *
 * Return: the total nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
