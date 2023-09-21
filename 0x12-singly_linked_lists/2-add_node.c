#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - Add a new node at start
 * @h: the address of the node to be printed
 *
 * Return: the size_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));
	if (p != NULL)
	{
		p->str = strdup(str);
		p->next = *head;
		*head = p;

	}
	return (p);
}
