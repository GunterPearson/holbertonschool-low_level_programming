#include "holberton.h"

/**
 * is_prime_number - start of function
 * @n: number to be tested
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int i = n;

	return (is_prime2(i, n));
}



/**
 * is_prime2 - start of second function
 * @i: set equal to n
 * @num: number given
 *
 * Return: int
 */
int is_prime2(int i, int num)
{
	if (num <= 1)
	{
		return (0);
	}
	if (i < num && i > 1)
	{
		if (num % i == 0)
			return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	else
	{
		return (is_prime2((i - 1), num));
	}
}
