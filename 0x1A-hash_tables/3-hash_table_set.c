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
	hash_node_t *node, *check;
	char *empty = "";

	if (key == empty || key == NULL || ht == NULL || value == NULL)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, (unsigned long int)size);
	check = ht->array[index];
	while (check != NULL)
	{
		if (strcmp(check->key, key) == 0)
		{
			free(check->value);
			check->value = strdup(value);
			return (1);
		}
		check = check->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
