#include "holberton.h"
/**
 * print_binary - start of function
 * @n: unsigned long int
 *
 * Return void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int power = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((temp >>= 1) > 0)
	{
		power++;
	}
	while (power >= 0)
	{
		if ((n >> power) & 1)
		{
			_putchar('1');
		}
		else
			_putchar('0');
		power--;
	}
}
