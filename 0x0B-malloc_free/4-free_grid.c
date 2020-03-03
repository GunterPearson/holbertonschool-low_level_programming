#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - start of free function
 * @grid: grid allocated space for
 * @height: amount of rows created
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
