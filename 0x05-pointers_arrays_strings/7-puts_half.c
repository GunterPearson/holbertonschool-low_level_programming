#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - start of function
 * @str: place holder for string
 *
 */
void puts_half(char *str)
{
        int i, l;

        for (i = 0; str[i] != '\0'; i++)
        l = i;
        if (l % 2 != 0)
	{
		for (i = (l + 1) / 2; i <= l; i++)
			_putchar(str[i]);
	}
	else
		for (i = l / 2; i <= l; i++)
			_putchar(str[i]);
	_putchar('\n');
}
