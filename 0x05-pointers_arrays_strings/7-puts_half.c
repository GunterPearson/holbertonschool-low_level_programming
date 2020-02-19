#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - start of function
 * @str: place holder for string
 *
 */
void puts_half(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
		;
        for (i = i / 2; i <= l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
