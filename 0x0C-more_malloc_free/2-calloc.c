#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for arraay
 * @nmemb: array size
 * @size: what type
 *
 * Return: allocated pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *out;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	out = malloc(nmemb * size);
	if (out == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		out[i] = 0;
	return ((void *) out);
}
