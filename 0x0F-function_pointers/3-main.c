#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - start of program
 * @argc: argument count
 * @argv: contains arguments
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int (*ans)(int a, int b) = get_op_func(argv[2]);

	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if (ans == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!(strcmp(argv[2], "%")) || !(strcmp(argv[2], "/"))) &&
	    (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	    printf("%d\n", ans(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
