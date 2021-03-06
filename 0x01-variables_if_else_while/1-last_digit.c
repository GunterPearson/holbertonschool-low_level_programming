#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * 1-last_digit.c
 *
 * description:
 * prints out if number executed
 * the last digit of number stored
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	printf("Last digit of %i is %i ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5");
	else if (last_digit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);

}
