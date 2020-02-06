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
	char nums;

	nums = '0';

	for (d = 0; d <= 9; d++)
	{
		putchar(nums + d);
		if (!(nums == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
