#include "lists.h"

/**
 * add_dnodeint - adds a node at the start
 * @head: the address of the first node
 * @n: the data part of the node
 *
 * Return: the address of the inserted node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (*head == NULL)
	{
		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->prev = NULL;
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
	return (*head);
}
