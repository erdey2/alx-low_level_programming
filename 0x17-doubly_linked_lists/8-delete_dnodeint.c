#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given index
 * @head: address of the first node
 * @index: the index of the node to be deleted
 *
 * Return: 1 on sucess -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	size_t nodeindex = 0;

	/*cheack for null head or empty list */
	if (!head || !*head)
	{
		return (-1);
	}
	while (temp && nodeindex < index)
	{
		temp = temp->next;
		nodeindex++;
	}
	if (nodeindex != index)
	{
		return (-1); /*check index outof bounds */
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next)
		{
			temp->next->prev = temp->prev;
		}
	}
	free(temp);
	return (1);
}
