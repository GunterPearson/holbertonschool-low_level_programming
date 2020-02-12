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
	int i, j;

	for (i = 1; i < 1025; i++)
	{
		if (i % 3 == 0)
			j += i;
		else if (i % 5 == 0)
			j += i;
	}
	printf("%i\n", j);
}
