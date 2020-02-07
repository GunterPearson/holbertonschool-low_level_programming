#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 10-print_comb.c
 *
 * description:
 * prints out all
 * digit combinations
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 0; b < 100; b++)
	{
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
		if (!(b == 99))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
