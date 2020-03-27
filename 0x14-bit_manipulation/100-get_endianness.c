#include "holberton.h"
/**
 * get_endianness - figures out storage
 * @void: what we are given
 *
 * Return: int
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
