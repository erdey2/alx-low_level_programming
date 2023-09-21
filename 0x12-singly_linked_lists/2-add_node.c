#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - Add a new node at start
 * @head: the address of the first node
 * @str: the string to to be added
 * Return: the address of the memory location
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		p->str = strdup(str);
		p->next = *head;
		*head = p;

	}
	return (p);
}
