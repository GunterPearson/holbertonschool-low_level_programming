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
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
