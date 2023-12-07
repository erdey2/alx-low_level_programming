#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a given index
 * @head: the address of the first node
 * @index: the index of the node to be found
 *
 * Return: the address of the node if found -1 if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodeindex = 0;

	while (head != NULL)
	{
		nodeindex++;
		if (index == nodeindex)
			return (head->next);
		head = head->next;
	}
		return (NULL);
}
