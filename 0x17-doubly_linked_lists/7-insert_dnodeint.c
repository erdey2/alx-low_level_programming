#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: address of the first node
 * @idx: the index of the node to be inserted
 * @n: the node's data part
 *
 * Return: the address of the inserted node on success NULL on error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *p;
	size_t nodeindex = 0;

	p = *h;
	while (p != NULL)
	{
		nodeindex++;
		if (idx != nodeindex)
			return (NULL);
		if (idx == nodeindex)
		{
			temp = malloc(sizeof(dlistint_t));
			if (temp == NULL)
				return (NULL);
			temp->n = n;
			temp->next = p->next;
			temp->prev = p;
			p->next = temp;
			if (temp->next != NULL)
				temp->next->prev = temp;
			return (temp);
		}
		p = p->next;
	}
	return (NULL);
}
