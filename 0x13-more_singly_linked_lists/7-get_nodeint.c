#include "lists.h"

/**
 * get_nodeint_at_index - find a node with a given index
 * @head: address of first node
 * @index: the data to be searched
 *
 * Return: the the address of the node if found NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int auto_index = 0;

	if (head == NULL)
		return (NULL);
	while (auto_index < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		auto_index++;
	}

	return (head);
}
