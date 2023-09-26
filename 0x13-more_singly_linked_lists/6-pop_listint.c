#include "lists.h"

/**
 * pop_listint - delete from front
 * @head: the address of first node
 *
 * Return: the data part of the node to be deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	current = *head;
	data = (*head)->n;
	*head = (*head)->next;
	current->next = NULL;
	free (current);

	return (data);
}
