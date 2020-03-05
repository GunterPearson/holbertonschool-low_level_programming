#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - allocates more memory space
 * @ptr: void ptr
 * @old_size: size of ptr given
 * @new_size: size of ptr out
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *out;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		out = malloc(new_size);
		if (out == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return ((void *) out);
	}
	out = malloc(new_size);
	if (out == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
		out[i] = *((char *)ptr + 1);
	while (i < new_size)
	{
		out[i] = 0;
		i++;
	}
	free(ptr);
	return ((void *) out);
}
