#include "hash_tables.h"
/**
 * key_index - locates index of key
 * @key: key to look for
 * @size: unsigned int
 *
 * Return: int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
