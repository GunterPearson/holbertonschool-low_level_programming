#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - checks for all upercase letters
 * @c: chekcs if letter is uper case
 *
 * Return: either 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
