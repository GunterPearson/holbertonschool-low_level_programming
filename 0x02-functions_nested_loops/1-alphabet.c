#include <stdio.h>
#include "holberton.h"
/*
 * 1-alphabet.c
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
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
