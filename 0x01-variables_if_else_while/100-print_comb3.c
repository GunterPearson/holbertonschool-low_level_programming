#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 100-print_comb3.c
 *
 * description:
 * prints out all
 * different two digit combinations
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 1;

	while (a <= 8)
	{
		b += c;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		b = 0;
		c++;
		a++;
	}
	putchar('\n');
	return (0);
}
