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
 * main- start
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 1025; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i != 1023)
			{
				printf("%i, ", i);
			}
			else
				printf("%i\n", i);
		}
	}
}
