#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - starting point
 * @a: place holder
 * @b: place holder
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
