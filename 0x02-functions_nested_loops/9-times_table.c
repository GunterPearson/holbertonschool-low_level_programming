#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/*
 * 9-times_table.c
 *
 * description:
 * writes a function
 * that computes
 * 9 time table
 */

/**
 * times_table- start
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar(i + '0');
			_putchar(j + '0');
		}
	}
}
