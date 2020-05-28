#include "hash_tables.h"
/**
 * hash_table_create - start of function
 * @size: unsigned int
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int x = 0;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->array = malloc(sizeof(hash_table_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	while (x < size)
	{
		hash->array[x] = NULL;
		x++;
	}
	return (hash);
}
