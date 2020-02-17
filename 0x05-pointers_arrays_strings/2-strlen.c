#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - entry point
 *
 * @s: place holder
 *
 * Return: int
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;

		return(n);
}
