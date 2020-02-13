#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - start of function
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 9 && b >= 0)
			{
				_putchar(b + '0');
			}
			else
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
