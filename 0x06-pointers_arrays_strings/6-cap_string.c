#include "holberton.h"

/**
 * *cap_string - start of function
 * @s: place holder of string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i, j;
	int a[] = {'\t','\n', ',', ';', '.', '!', '?', '"', '(',
		   ')', '{', '}', ' '};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 13; j++)
			if (s[i] == a[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
	}
	return (s);
}
