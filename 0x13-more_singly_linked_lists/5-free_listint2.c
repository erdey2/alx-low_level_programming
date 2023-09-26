#include "lists.h"

/**
 * free_listint2 - free an allocated memory
 * @head: the address of the first node
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free (current);
	       current = next;
	}
}
