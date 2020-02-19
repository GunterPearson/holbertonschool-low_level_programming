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
	int p = 0;

	for (n--; n >= 0; n--, p++)
	{
		printf("%d", a[p]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
