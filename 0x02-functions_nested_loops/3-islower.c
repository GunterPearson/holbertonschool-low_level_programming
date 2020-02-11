#include <ctype.h>
#include "holberton.h"
/*
 * 3-islower.c
 *
 * description:
 * writes a function
 * that checks for lower case
 */

/**
 * _islower- start
 * @c: represents int value to be tested
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
