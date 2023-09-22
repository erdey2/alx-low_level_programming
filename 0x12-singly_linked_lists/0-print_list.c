#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the information of the linked list
 * @h: the address of the node to be printed
 *
 * Return: the size_t
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
