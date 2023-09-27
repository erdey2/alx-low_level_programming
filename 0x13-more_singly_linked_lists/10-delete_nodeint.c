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
	listint_t *current, *last;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		last = (*head)->next;
		free(*head);
		*head = last;
		return (1);
	}
	current = *head;
	while (i < (index - 1))
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	last = current->next;
	current->next = last->next;
	free(last);
	return (1);
}
