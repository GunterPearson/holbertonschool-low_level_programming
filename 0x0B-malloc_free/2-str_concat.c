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
	int i, j, ss, os;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ss = 0; s1[ss]; ss++)
		;
	for (os = 0; s2[os]; os++)
		;
	s = malloc(ss + os * sizeof(char *));
	if (s == NULL)
	{
		return (s);
	}
	for (i = 0; s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);
}
