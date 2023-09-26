#include "lists.h"

/**
 * add_nodeint - add node in the begining
 * @head: the address of the node
 * @n: the data element to be inserted
 *
 *Return: the address of the added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *q;

	q = malloc(sizeof(listint_t));
	if (q == NULL)
		return (NULL);
	q->n = n;
	q->next = *head;
	*head = q;

	return (q);
}
