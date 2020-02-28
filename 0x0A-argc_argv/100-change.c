#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - start of program
 * @argc: counts arguments
 * @argv: contains arguments given
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 1;
	int sub = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (atoi(argv[1]) - 25 >= '0')
	{
		sub -= 25;
		i++;
	}
	while (atoi(argv[1]) - 10 >= '0')
	{
		sub -= 10;
		i++;
	}
	while (atoi(argv[1]) - 5 >= '0')
	{
		sub -= 5;
		i++;
	}
	while (atoi(argv[1]) - 1 >= '0')
	{
		sub -= 1;
		i++;
	}
	if (sub == 0)
	{
		printf("%d\n", i);
		return (0);
	}
}
