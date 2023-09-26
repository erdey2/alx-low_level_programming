#include "lists.h"

/**
 * sum_listint - adds all the node data
 *@head: the address of the first node
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);


}
