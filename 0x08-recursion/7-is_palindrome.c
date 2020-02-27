#include "holberton.h"

/**
 * is_palindrome - start of function
 * @s: string we are given
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	return (check1(s, 0));
}





/**
 * len - finds str len
 * @s: string tested
 *
 * Return: int
 */
int len(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);
	else
		return (i + 1 + len(s + 1));
}



/**
 * check1 - checks to see if
 * s is a palindrome
 * @s: string tested
 *
 * Return: int
 */
int check1(char *s, int b)
{
	int e = len(s) - (b + 1);

	if (*(s + b) == *(s + e))
	{
		if (b + 1 == e || b == e)
		{
			return (1);
		}
		return (check1(s, b + 1));
	}
	else
	{
		return (0);
	}
}
