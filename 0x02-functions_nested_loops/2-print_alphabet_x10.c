#include <stdio.h>
#include "holberton.h"
/*
 * 2-print_alphabet_x10.c
 *
 * description:
 * prints out alphabet
 * using putchar
 */

/**
 * print_alphabet - start
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 'a'; y < 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
