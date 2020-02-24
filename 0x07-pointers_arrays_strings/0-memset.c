#include "holberton.h"

/**
 * *_memset - start of function
 * @s: char
 * @b: char
 * @n: unsigned int
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
		if (*(s + i) == '\0')
			break;
	}
	return (s);
}
