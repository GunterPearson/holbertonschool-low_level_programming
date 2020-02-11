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
 * print_to_98- start
 * @n: placeholder for int
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a < 99; a++)
		{
			if (a != 98)
			{
				printf("%i, ", a);
			}
			else
			{
				printf("%i\n", a);
			}
		}
	}
	if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%i, ", a);
			}
			else
			{
				printf("%i\n", a);

			}
		}
	}
}
