#include <ctype.h>
#include "holberton.h"
/*
 * 5-sign.c
 *
 * description:
 * writes a function
 * that checks for positive
 * negative and lowercase
 */

/**
 * _islower- start
 *
 * Return: Always 0 (Success)
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
       	else
       	{
		_putchar('-');
		return (-1);
	}
}
