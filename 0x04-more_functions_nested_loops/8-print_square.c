#include "holberton.h"
#include <stdio.h>

/**
 * print_square - start of function
 * @size: dimensions of square
 *
 * Return: void
 */
void print_square(int size)
{
	int d, a;

	if (size > 0)
	{
		for (d = 0; d < size; d++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
