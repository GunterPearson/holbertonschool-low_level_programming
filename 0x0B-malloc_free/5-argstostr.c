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
	int i;
	int size = 1;
	char *o = NULL;
	char *tmp = NULL;
	char *a;

	if (ac == 0)
	{
		return (NULL);
	}
	o = malloc(size);
	if (o == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		size += (count(av[i]) + 1);
		tmp = realloc(o, size);
		if (tmp == NULL)
		{
			return (NULL);
		}
		o = tmp;
		o = cat(o, av[i]);
		a = o;
	}
	return (a);
}

/**
 * cat - start of function
 * @t: pointer taking strings
 * @g: pointer giving strings
 *
 * Return: char pointer
 */
char *cat(char *t, char *g)
{
	int i, j;
	int c = 0;
	int h = count(t) + count(g) + 2;
	char *r = malloc(h * sizeof(char));

	for (i = 0; t[i]; i++)
	{
		r[i] = t[i];
	}
	for (j = i; j < (count(t) + count(g)); j++)
	{
		r[j] = g[c++];
	}
	r[j] = '\n';
	r[h - 1] = '\0';
	return (r);
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
