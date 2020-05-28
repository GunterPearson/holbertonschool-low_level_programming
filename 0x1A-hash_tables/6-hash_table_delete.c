#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash pointer
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next_node;
	unsigned long int index = 0;

	node = ht->array[index];
	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
		}
	index++;
	}
	free(ht->array);
	free(ht);
}
