#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - determine the length of a string
 * @s: the string
 *
 * Return: the length (int)
 */

int _strlen(const char *s)
{
	int size = 0;

	while (*s)
	{
		size++;
		s++;
	}

	return (size);
}

/**
 * add_node_end - Add a new node at the end
 * @head: the address of the first node
 * @str: the string to to be added
 *
 * Return: the address of the memory address of the last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *r;
	
	if (*head == NULL)
	{
		temp = malloc(sizeof(list_t));
		temp->str = strdup(str);
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		temp = *head;
		while (temp ->next != NULL)
		{
			temp = temp -> next;
			r = malloc(sizeof(list_t));
			r->str = strdup(str);
			r->len = _strlen(str);
			r->next = NULL;
			temp->next = r;

		}
	}
	return (temp);
}
