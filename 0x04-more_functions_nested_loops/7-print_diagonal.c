#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - start of function
 * @n: int place holder
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = a; b > 0; b--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
