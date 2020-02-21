#include "holberton.h"

/**
 * _strcmp - entry of function
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, d = 0;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
			d = s1[i] - s2[i];
		break;
	}
	return (d);
}
