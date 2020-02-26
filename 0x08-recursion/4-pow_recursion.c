#include "holberton.h"

/**
 * _pow_recursion - start of pwer function
 * @x: number given
 * @y: power x is raised to
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
