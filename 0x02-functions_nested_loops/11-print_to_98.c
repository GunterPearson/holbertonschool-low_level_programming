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
 * @n -placeholder for int
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int a, c, sum;

	if (n <= 98)
	{
		sum = n + 98;
		a = sum - 98;
		for (c = a; c <= 98; c++)
		{
			_putchar(c);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
