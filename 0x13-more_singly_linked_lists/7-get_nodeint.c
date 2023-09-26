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
	listint_t *current, *match;
	int found = 0;
	unsigned int auto_index = 0;

	current = head;
	while (current != NULL)
	{
		auto_index++;
		if (auto_index == index)
		{
			found++;
			match = current;
		}
		current = current->next;
	}
	if (found == 0)
		return (NULL);
	return (match);
}
