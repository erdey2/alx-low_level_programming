#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index = 0;
	char *comma = "";

	if (!ht || !ht->array)
		return;
	putchar('{');
	while (index < ht->size)
	{
		temp = ((ht->array)[index]);
		while (temp)
		{
			printf("%s'%s': '%s'", comma, temp->key, temp->value);
			comma = ", ";
			temp = temp->next;
		}
		index++;
	}
	puts("}");
}
