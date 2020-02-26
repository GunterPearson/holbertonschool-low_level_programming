#include "holberton.h"

/**
 * _sqrt_recursion - start of sqrt funtion
 * @n: what is getting sqrt
 *
 * Return: int
 */

int _sqrt2(int i, int n);


int _sqrt_recursion(int n)
{
	int i = n;

	return (_sqrt2(i, n));
}

int _sqrt2(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i <= 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt2((i - 1), n));
	}
}
