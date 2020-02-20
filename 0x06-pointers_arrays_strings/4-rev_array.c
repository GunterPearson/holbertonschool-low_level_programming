#include "holberton.h"

/**
 * reverse_array - start of function
 * @a: pointer to array
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c, p;

	for (c = 0; c < (n / 2); c++)
	{
		p = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = p;
	}
}
