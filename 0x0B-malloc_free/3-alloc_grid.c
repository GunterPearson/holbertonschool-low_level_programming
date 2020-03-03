#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - start of function
 * @width: cols
 * @height: rows
 *
 * Return: double pointer
 */
int **alloc_grid(int width, int height)
{
	int **m = malloc(height * sizeof(int *));
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = create(width);
	}
	return (m);
}
/**
 * create - start of function
 * @cols: how long to make cols
 *
 * Return: new pointer containing 0
 */
int *create(int cols)
{
	int i;
	int *a = malloc(cols * sizeof(int));
	for (i = 0; i < cols; i++)
	{
		a[i] = 0;
	}
	return (a);
}
