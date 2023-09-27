#include "lists.h"

/**
 * find_listint_loop - finds corresponding loop in a linked list
 * @head: the adress of the first element
 *
 * Return: address of the start of the loop NULL otherwise
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *other;

	loop = other = head;
	while (loop && other && other->next)
	{
		loop = loop->next;
		other = other->next->next;
		if (loop == other)
		{
			loop = head;
			break;
		}
	}
	if (!loop || !other || !other->next)
		return (NULL);
	while (loop != other)
	{
		loop = loop->next;
		other = other->next;
	}
	return (other);
}
