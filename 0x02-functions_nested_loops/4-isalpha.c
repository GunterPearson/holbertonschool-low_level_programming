#include <ctype.h>
#include "holberton.h"
/*
 * 4-isalpha.c
 *
 * description:
 * writes a function
 * that checks for lower case
 * and upper case
 */

/**
 * _isalpha- start
 * @c: represents int value to be tested
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
