#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - starting point
 * @s: place holder
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	for (c--; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
