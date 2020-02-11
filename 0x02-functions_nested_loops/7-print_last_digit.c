#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/*
 * 7-last_digit.c
 *
 * description:
 * writes a function
 * that computes
 * last digit
 */

/**
 * print_last_digit- start
 * @c: represents int value to be tested
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
		c = -c;
	_putchar('0' + (c));
	return (c);
}
