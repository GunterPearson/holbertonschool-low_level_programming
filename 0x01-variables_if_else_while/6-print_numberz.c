#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 5-print_numbers.c
 *
 * description:
 * prints out all single digit
 * of base 10
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single;

	single = '0';
	for (single = '0'; single <= '9'; single++)
		putchar(single);
	putchar('\n');
	return (0);
}
