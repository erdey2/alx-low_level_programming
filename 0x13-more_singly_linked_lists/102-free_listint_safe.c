#include "lists.h"

/**
 * new_listt - creates a new memory for double pointers
 * @list: the old list to append
 * @size: the size of the new list
 * @temp: the new temporary node
 *
 * Return: an address of the temporary pointer
 */

listint_t **new_listt(listint_t **list, size_t size, listint_t *temp)
{
	listint_t **list_n;
	size_t count;

	list_n = malloc(size * sizeof(listint_t *));
	if (list_n == NULL)
	{
		free(list);
		exit(98);
	}
	for (count = 0; count < size - 1; count++)
		list_n[count] = list[count];
	list_n[count] = temp;
	free(list);
	return (list_n);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: hold the address of the first node
 *
 * Return: the total nodes in the list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count, size = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (size);
	while (*head != NULL)
	{
		for (count = 0; count < size; count++)
		{
			if (*head == list[count])
			{
				*head = NULL;
				free(list);
				return (size);
			}
		}
		size++;
		list = new_listt(list, size, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (size);
}
