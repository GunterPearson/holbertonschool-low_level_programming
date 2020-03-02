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
	int i = 0;
	int sub;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	sub = atoi(argv[1]);
	if (sub > 0)
	{
		while (sub - 25 >= 0)
		{
			sub -= 25;
			i++;
		}
		while (sub - 10 >= 0)
		{
			sub -= 10;
			i++;
		}
		while (sub - 5 >= 0)
		{
			sub -= 5;
			i++;
		}
		while (sub - 1 >= 0)
		{
			sub -= 1;
			i++;
		}
		printf("%d\n", i);
		return (0);
	}
	return (0);
}
