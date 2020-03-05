#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - start of function
 * @s1: string we are adding s2 too
 * @s2: string added to the end of s1
 * @n: unsigned int
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *returning;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = _stlen(s1);
	j = _stlen(s2);
	if (n >= j)
	{
		returning = malloc(i + j + 1);
		if (returning == NULL)
			return (NULL);
	}
	if (j > n)
	{
		returning = malloc(i + n + 1);
		if (returning == NULL)
			return (NULL);
	}
	for (i = 0; s1[i]; i++)
		returning[i] = s1[i];
	if (n >= j)
	{
		for (j = 0; s2[j]; j++, i++)
			returning[i] = s2[j];
		returning[i] = '\0';
	}
	if (j > n)
	{
		for (j = 0; j < n; j++, i++)
			returning[i] = s2[j];
		returning[i] = '\0';
	}
	return (returning);
}
/**
 * strlen - counter for strlen
 * @s: string given to count
 *
 * Return: int
 */
unsigned int _stlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
