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
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		printf("%i", numbers);
	printf("\n");
	return (0);

}
