#include "lists.h"

/**
 * new_list - creates a new memory for double pointers
 * @list: the old list to append
 * @size: the size of the new list
 * @temp: the new temporary node
 *
 * Return: an address of the temporary pointer
 */

const listint_t **new_list(const listint_t **list,
		size_t size, const listint_t *temp)
{
	const listint_t **list_n;
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
 * print_listint_safe - display listint_t linked list
 * @head: hold the address of the first node
 *
 * Return: the total nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, len = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (count = 0; count < len; count++)
		{
			if (head == list[count])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (len);
			}
		}
		len++;
		list = new_list(list, len, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (len);
}
