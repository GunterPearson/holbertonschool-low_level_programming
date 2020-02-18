#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - start of function
 * @s: place holder for string
 *
 */
void rev_string(char *s)
{
	int i, l;
	char a, *e = s, *b = s;

	for (i = 0; s[i] != '\0'; i++)
		;
	l = i;
	for (i = 0; i < l - 1; i++)
		e++;
	for (i = 0; i < l / 2; i++)
	{
		a = *b;
		*b = *e;
		*e = a;
		b++;
		e--;
	}
}
