#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/*
 * 8-24_hours.c
 *
 * description:
 * writes a function
 * that computes
 * military time
 */

/**
 * print_last_digit- start
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
