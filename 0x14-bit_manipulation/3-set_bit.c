#include "holberton.h"
/**
 * set_bit - start of funtion
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	if (index > 64)
		return (-1);
	while (index > 0)
	{
		temp <<= 1;
		index--;
	}
	*n |= temp;
	return (1);
}
