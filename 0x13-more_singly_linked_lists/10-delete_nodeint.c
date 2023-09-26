#include "lists.h"

/**
 * delete_nodeint_at_index - delete node from  a given position
 * @head: the address of the first node
 * @index: the position of the node to be deleted
 *
 * Return: the data part of the node to be deleted
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	current = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
		return (-1);
	while (i < (index - 1) && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current->next == NULL)
		return (-1);
	(current - 1)->next = current->next;
	current->next = NULL;
	return (current->n);
}
