#include "holberton.h"

/**
 * *cap_string - start of function
 * @s: place holder of string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int c;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] = *t)
		{
			s[c] = s[c + 1] = s[c] -= 32;
		}
	}
	return (s);
}
