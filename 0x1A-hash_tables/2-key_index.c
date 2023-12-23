#include "hash_tables.h"

/**
 * key_index - finds a index of a given key
 * @key: a pointer to a given key
 * @size: the table size
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
