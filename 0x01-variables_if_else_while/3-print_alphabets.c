#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 2-print_alphabet.c
 *
 * description:
 * prints out the alphabet
 * in all lower case
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	int c;
	char capitals;

	alphabet = 'a';
	capitals = 'A';

	for (c = 0; c < 26; c++)
		putchar(alphabet + c);
	for (c = 0; c < 26; c++)
		putchar(capitals + c);
	putchar('\n');
	return (0);
}
