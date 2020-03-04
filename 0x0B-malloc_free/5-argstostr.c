#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - start of funtion
 * @ac: int given
 * @av: double pointer given
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int per = 0;
	int i = 0, j = 0, k = 0, w = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		w += count(av[i]) + 1;
	}
	s = (char *) malloc(sizeof(char) * w + 1);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		k = count(av[i]);
		for (j = 0; j < k; j++, per++)
		{
			s[per] = av[i][j];
		}
		s[per++] = '\n';
	}
	s[per] = '\0';
	return (s);
}

/**
 * count - start of funtion
 * @argv: pointer being counter
 *
 * Return: returns an int
 */
int count(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		;
	return (i);
}
