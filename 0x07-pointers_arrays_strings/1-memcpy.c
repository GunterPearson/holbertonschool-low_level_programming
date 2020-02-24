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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (dest);
}
