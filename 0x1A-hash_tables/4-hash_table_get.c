#include "hash_tables.h"
/**
 * hash_table_get - gets index of key
 * @ht: hash table
 * @key: key to search for
 *
 * Return: char *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *result;
	unsigned long int index;
	hash_node_t *view;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	view = ht->array[index];
	result = strdup(view->value);
	return (result);
}
