#include "holberton.h"

/**
 * _sqrt_recursion - start of sqrt funtion
 * @n: what is getting sqrt
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i = n;

	return (_sqrt2(i, n));
}

/**
 * _sqrt2 - start of 2nd function
 * @i: set equal to n
 * @num: number given
 *
 * Return: int
 */
int _sqrt2(int i, int num)
{
	if (num % 10 == 0)
	{
		return (-1);
	}
	if (num == 0)
	{
		return (-1);
	}
	if (i * i == num)
	{
		return (i);
	}
	if (i <= 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt2((i - 1), num));
	}
}
