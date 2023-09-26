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
	while (i < (idx - 1))
	{
		last = last->next;
		i++;
	}
	if (last == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = last->next;
	last->next = temp;
	return (temp);
}
