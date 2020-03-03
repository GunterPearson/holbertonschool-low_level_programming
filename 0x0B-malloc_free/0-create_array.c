#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - start of function
 * @size: size of array
 * @c: what array is filled with
 *
 * Return: char pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cp;

	if (size == 0)
	{
		return (NULL);
	}
	cp = malloc(size * sizeof(char));
	if (cp == NULL)
	{
		return (cp);
	}
	for (i = 0; i < size; i++)
	{
		cp[i] = c;
	}
	return (cp);
}
