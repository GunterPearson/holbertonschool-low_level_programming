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
	int **m = NULL;
	int i, *s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	m = malloc(height * sizeof(int *));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = (s = create(width));
		if (m[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(m[i]);
			}
				free(m);
			return (NULL);
		}
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
	int *p = malloc(cols * sizeof(int));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < cols; i++)
	{
		p[i] = 0;
	}
	return (p);
}
