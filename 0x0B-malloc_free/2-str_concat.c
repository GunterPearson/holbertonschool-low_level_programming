#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - start of function
 * @s1: first string given
 * @s2: second string given
 *
 * Return: char pointer to allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *s = NULL;
	int i, j;

	s = malloc(2 * sizeof(char *));
	if (s == NULL)
	{
		return (s);
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			s[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j]; j++, i++)
		{
			s[i] = s2[j];
		}
	}
	s[i] = '\0';
	return (s);
}
