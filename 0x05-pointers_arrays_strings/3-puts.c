#include "holberton.h"
#include <stdio.h>

/**
 * _puts - entry point
 *
 * @str: place holder
 *
 * Return: void
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
