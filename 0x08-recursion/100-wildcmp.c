#include "holberton.h"

/**
 * wildcmp - start of function
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	return comp(s1, s2);
}



/**
 * comp - compare strings
 * @f: first string given
 * @s: second string given
 *
 * Return: int
 */
int comp(char *f, char *s)
{
	del(s);
	if (*f == '\0' && *s != '\0')
	{
		return (1);
	}
	if (*f == '\0' && *s == '\0')
	{
		return (1);
	}
	if (*f == *s)
	{
		return (comp(f + 1, s + 1));
	}
	return (comp(f + 1, s));
}


/**
 * del - delete '*'
 * @s: string we are
 * removing from
 *
 * Return: string
 */
char *del(char *s)
{
	if (*s != '*')
	{
		return (s);
	}
	return (del(s + 1));
}
