#include <stdio.h>
#include "holberton.h"

/**
 * print_array - starting point
 * @a: place holder
 * @n: place holder
 *
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		if (p == n - 1)
		{
			printf("%d", a[p]);
			printf("\n");
		}
		else
		{
			printf("%d, ", a[p]);
		}
	}
}
