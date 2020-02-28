#include "holberton.h"

/**
 * *_memcpy - start of function
 * @dest: copying src to here
 * @src: whats getting moved
 * @n: unsigned int
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
