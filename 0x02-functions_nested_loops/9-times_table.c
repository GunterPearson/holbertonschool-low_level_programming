#include "holberton.h"

/**
 * times_table - Print the `n` times table, starting with 0.
 * Description: If greater than 15 or less than 0, print nothing.
 *
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		y = 0;
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
