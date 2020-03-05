#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - start of function
 * @min: smallest number given
 * @max: largest number given
 *
 * Return: int array
 */
int *array_range(int min, int max)
{
	int i, s;
	int *out;

	if (min > max)
		return (NULL);
	s = (max - min) + 1;
	out = malloc(sizeof(int) * s);
	if (out == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		out[i] = min++;
	return (out);
}
