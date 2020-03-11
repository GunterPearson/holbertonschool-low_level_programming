#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - start of funtion
 * @array: array given to search
 * @size: how larg array is
 * @cmp: funtion pointer
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
