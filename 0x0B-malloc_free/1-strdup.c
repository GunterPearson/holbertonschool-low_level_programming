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
	nstr = malloc((c + 1) * sizeof(char *));
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		nstr[i] = str[i];
	}
	nstr[i] = '\0';
	return (nstr);
}
