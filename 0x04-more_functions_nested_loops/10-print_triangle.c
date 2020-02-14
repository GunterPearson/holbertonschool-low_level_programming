#include "holberton.h"

/**
 * print_triangle - start of function
 * @size:
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 0; b--)
				_putchar(' ');
			for (c = size - a; c < size; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
