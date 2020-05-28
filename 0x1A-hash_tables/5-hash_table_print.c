#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: contains hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (size < ht->size)
	{
		while (ht->array[size] != NULL)
		{
			printf("'%s': '%s'", (ht->array[size])->key, (ht->array[size])->value);
			if (ht->array[size]->key != NULL)
				printf(", ");
			size++;
		}
		size++;
	}
	printf("}\n");
}
