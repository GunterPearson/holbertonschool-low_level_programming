#include "holberton.h"

/**
 * _strlen_recursion - start of function
 * @s: string we are given
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		return (i + 1 + _strlen_recursion(s + 1));
	}
}
