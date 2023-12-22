#include "hash_tables.h"

/**
 * hash_table_set - insert an element into the hash table
 * @ht: the hash table we want to insert in
 * @key: hash node's key
 * @value: hash node's value
 *
 * Return: 1 on success -1 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size;
	unsigned long int index, i;
	char *copy;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(copy);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = copy;
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}
