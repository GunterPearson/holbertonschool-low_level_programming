#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/*
 * 6-abs.c
 *
 * description:
 * writes a function
 * that computes
 * absoulute value
 */

/**
 * print_sign- start
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c - 2 * c);
}
