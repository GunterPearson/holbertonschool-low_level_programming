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
	unsigned int size = 1;
	char *o = NULL;
	char *tmp = NULL;
	char *a;

	o = malloc(size);
	if (o == NULL)
	{
		free(o);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL || av[i] != 0)
		{
			size += (count(av[i]) + 1);
			tmp = realloc(o, size);
		}
		o = tmp;
		o = cat(o, av[i]);
		if (o != NULL && tmp != NULL)
		{
			a = o;
		}
		else
		{
			free(tmp);
			free(av[i]);
			free(o);
			return (NULL);
		}
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
	unsigned int i, j;
	unsigned int c = 0;
	unsigned int h = count(t) + count(g) + 2;
	char *r = malloc(h * sizeof(char));

	if (r == NULL)
	{
		free(r);
		return (NULL);
	}
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
unsigned int count(char *argv)
{
	unsigned int i;

	for (i = 0; argv[i]; i++)
		;
	return (i);
}
