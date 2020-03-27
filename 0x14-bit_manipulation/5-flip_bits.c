#include "holberton.h"
/**
 * flip_bits - start of funciton
 * @n: unsigned long
 * @m: unsigned long
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int opp;
	unsigned int count = 0;
	unsigned long int temp = 0;

	temp = m > n ? m : n;
	if (m == 0)
		count--;
	if (n == 0)
		count--;
	if (m == n)
		return (0);
	if (m < 10 || n < 10)
		count++;
	if (m - n < 10 || n - m < 10)
		count++;
	while ((temp >>= 1) > 0)
		i++;
	opp = m ^ n;
	while (i >= 0)
	{
		if ((opp >>= 1) & 1)
			count++;
		i--;
	}
	return (count);
}
