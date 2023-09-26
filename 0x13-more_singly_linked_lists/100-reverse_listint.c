#include "lists.h"

/**
 * reverse_listint - print linked list in reverse
 * @head: the address of the first node
 * Return: the address of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *last;

	start = *head;
	last = *head;

	while (last != NULL)
	{
		last = last->next;
	}
	while (start != NULL && last == *head)
	{
		start->n = last->n;
		start = start->next;
		last--;
	}
	return start;
}

