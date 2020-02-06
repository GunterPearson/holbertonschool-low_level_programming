#include <stdlib.h>
#include <time.h>
/*
 *0-positive_or_negative.c
 *
 * description:
 * prints out if number executed
 * is positive, negative or equal
 */

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);

}
