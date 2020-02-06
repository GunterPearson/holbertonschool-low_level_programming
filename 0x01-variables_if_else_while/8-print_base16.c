#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 8-print_base16.c
 *
 * description:
 * prints out the alphabet
 * in base 16
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num, letter;
	int a;

	num = '0';

	for (a = 0; a <= 9; a++)
		putchar(num + a);
	letter = 'a';

	for (a = 0; a <= 5; a++)
		putchar(letter + a);
	putchar('\n');

	return (0);
}
