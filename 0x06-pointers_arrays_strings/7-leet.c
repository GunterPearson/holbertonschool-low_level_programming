#include "holberton.h"

/**
 * *leet - entrance of function
 * @s: place holder of input
 *
 * Return: char
 */
char *leet(char *)
{
	int i, j;
	char a[] = {a, A, e, E, o, O, t, T, l, L}
	char n[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1}

	for (i = 0; s[i]; i++)
	{
		for (j = 0, j < 10, j++)
		{
			if (s[i] == a[i])
			{
				s[i] = n[i];
			}
		}
	}
	return (s);
}
