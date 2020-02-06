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
	int nums;
	char c, d;

	c = ',';
	d = ' ';
	for (nums = '0'; nums <= '9'; nums++)
	{
		putchar(nums);
		if (!(nums == 9))
		{
			putchar(c);
			putchar(d);
		}
	}
	putchar('\n');
	return (0);
}
