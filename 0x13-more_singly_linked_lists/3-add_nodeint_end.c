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
	listint_t *temp, *last;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;
	if (temp == NULL)
		return (NULL);
	return (temp);
}
