#include "holberton.h"
/**
 * get_bit - start of function
 * @n: long unsigned int
 * @index: unsigned int
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = n >> index;
	int back = 0;

	if (index > 64)
		return (-1);
	if (temp & 1)
		back = 1;
	else
		back = 0;
	return (back);
}
