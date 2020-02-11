#include "holberton.h"

/**
 * times_table- start
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int row, col, x;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			if (col < 9)
			{
				x = row * col;
				if (x < 10 && x >= 0)
				{
					_putchar(x + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				x = row * col;
				if (x < 10 && x >= 0)
				{
					_putchar(x + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
