#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - entry point
 *
 * @str: place holder
 *
 * Return: void
 */
void puts2(char *str)
{
        int s;

        for (s = 0; str[s] != '\0'; s++)
        {
		if (s % 2 == 0)
			_putchar(str[s]);
        }
        _putchar('\n');
}
