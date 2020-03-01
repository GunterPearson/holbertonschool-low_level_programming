#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * main - start of program
 * @argc: count of arguments
 * @argv: arguments passed
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
