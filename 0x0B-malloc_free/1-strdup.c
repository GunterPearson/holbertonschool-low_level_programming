#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - start of function
 * @str: string we are given to copy
 *
 * Return: new pointer allocated
 */
char *_strdup(char *str)
{
	char *nstr;
	int i, c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0; str[c]; c++)
		;
	c += 1;
	nstr = malloc(c);
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
