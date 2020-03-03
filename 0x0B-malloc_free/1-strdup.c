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
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	nstr = malloc(sizeof(char *));
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
