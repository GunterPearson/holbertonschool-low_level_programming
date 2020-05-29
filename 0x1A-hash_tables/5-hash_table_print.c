#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: contains hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = 0, com = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	while (size < ht->size)
	{
		node = ht->array[size];
		while (node != NULL)
		{
			if (com)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			com = 1;
			node = node->next;
		}
		size++;
	}
	printf("}\n");
}
