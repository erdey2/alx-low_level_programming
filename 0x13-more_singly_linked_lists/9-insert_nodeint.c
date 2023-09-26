#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a given position
 * @head: the address of the first node
 * @idx: the index
 * @n: the data to be inserted
 *
 * Return: the address of the inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *last, *temp;

	last = *head;
	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		last = *head;
		while (i < (idx - 1) && last != NULL)
		{
		
			last = last->next;
			i++;
		}
			if (last == NULL)
				return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	temp->next = last->next;
	last->next = temp;
	return (temp);
}
