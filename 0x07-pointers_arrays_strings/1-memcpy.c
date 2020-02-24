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
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
