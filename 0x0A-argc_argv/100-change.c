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
	int sub;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (_natint(argv[1]) == 1)
	{
		printf("0\n");
		return (0);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	sub = atoi(argv[1]);
	if (sub > 0)
	{
		printf("%d\n", subtraction(sub));
		return (0);
	}
	return (0);
}


/**
 * _natint - start of funtion
 * @s: string given
 *
 *
 * Return: int
 */
int _natint(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!((s[i] >= '0') && (s[i] <= '9')))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * subtraction - start of function
 * @sub: int being subtracted
 *
 * Return: int
 */
int subtraction(int sub)
{
	int i = 0;

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
	return (i);
}
