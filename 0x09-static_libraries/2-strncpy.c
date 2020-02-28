#include "holberton.h"

/**
 * *_strncpy - start of function
 * @dest: where we are copying src too
 * @src: what we are given
 * @n: how much of src gets copied to dest
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w;

	for (w = 0; src[w] != '\0' && w < n; w++)
	{
		dest[w] = src[w];
	}
	for (; w < n; w++)
	{
		dest[w] = '\0';
	}
	return (dest);

}
