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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int m = n % 10;
	printf("Last digit of %i is %i ", n, m);
	if (m > 5)
		printf("and is greater than 5\n");
	else if (m == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);

}
