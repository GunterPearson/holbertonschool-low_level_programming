#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 8-print_base16.c
 *
 * description:
 * prints out all single
 * digit combinations
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int nums;

	nums = '0';

	for (d = 0; d < 10; d++)
	{
		putchar(nums + d);
		if (!(d == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
