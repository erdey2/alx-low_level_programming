#include "lists.h"

/**
 * sum_dlistint - sums the node's data
 * @head: the address of the first node
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
