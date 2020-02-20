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
	int c1, c2, d;
	int a, b;
	for (c1 = 0; s1[c1] != '\0'; c1++)
		a = s1[c1] + '0';
	for (c2 = 0; s2[c2] != '\0'; c2++)
		b = s2[c2] + '0';
	d = a - b;
	return (d);
}
