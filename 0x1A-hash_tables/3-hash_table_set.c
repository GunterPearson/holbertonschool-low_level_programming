#include "hash_tables.h"
/**
 * hash_table_set - start of function
 * @ht: new hash table to add
 * @key: represents key
 * @value: represents value
 *
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index;
	hash_node_t *node;
	char *empty = "";

	if (key == empty || key == NULL || ht == NULL || value == NULL)
		return (0);
	size = ht->size;
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, (unsigned long int)size);
	if (ht->array[index] != NULL)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	ht->array[index] = node;
	return (1);
}
