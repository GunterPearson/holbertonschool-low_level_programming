#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 7-print_tebahpla.c
 *
 * description:
 * prints out the alphabet
 * in all lower case backwords
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;
	int a;

	alph = 'z';
	for (a = 0; a < 26; a++)
		putchar(alph - a);
	putchar('\n');

	return (0);
}
