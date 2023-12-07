#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: the address of the first node
 * @n: the data part of the node
 *
 * Return: the address of the node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *last;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
		temp->prev = last;
	}
	return (*head);
}
