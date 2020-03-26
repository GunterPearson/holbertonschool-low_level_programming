#include "holberton.h"
/**
 * clear_bit - changes to 0
 * @n: unsigned int
 * @index: unsigned int
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	if (index > 64)
		return (-1);
	if (*n == 0)
		return (1);
	while (index > 0)
	{
		temp <<= 1;
		index--;
	}
	*n ^= temp;
	return (1);
}
