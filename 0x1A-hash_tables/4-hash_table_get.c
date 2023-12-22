#include "hash_tables.h"

/**
 * hash_table_get - find an associated value.
 * @ht: the hash table.
 * @key: the key of the value.
 *
 * Return: on success the value otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (index >= size)
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node->value);
}
