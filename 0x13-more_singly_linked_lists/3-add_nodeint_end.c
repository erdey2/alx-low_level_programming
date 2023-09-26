#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: the address of the node
 * @n: the data element be be inserted
 *
 *Return: the address of the added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *q, *temp;

	if (*head == NULL)
	{
		q = malloc(sizeof(listint_t));
		if (q == NULL)
			return (NULL);
		q->n = n;
		q->next = NULL;
		*head = q;
	}
	else
	{
		q = *head;
		while (q->next != NULL)
			q = q->next;
		temp = malloc(sizeof(listint_t));
		temp->n = n;
		temp->next = NULL;
		q->next = temp;
	}
	return (temp);
}
