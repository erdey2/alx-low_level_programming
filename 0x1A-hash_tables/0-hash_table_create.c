#include "hash_tables.h"

/**
 * hash_table_create - a function that create a hash table
 * @size: the size of the table to be created
 *
 * Return: the address of the created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = NULL;
	return (table);
}
