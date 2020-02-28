#include "holberton.h"

/**
 * *_strchr - entry point
 * @s: the string we are given
 * @c: the character in the string
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
