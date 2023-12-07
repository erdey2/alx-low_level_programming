#include "lists.h"

/**
 * free_dlistint - free an allocated nodes
 * @head: the address of the first node
 *
 * Return: do not return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
