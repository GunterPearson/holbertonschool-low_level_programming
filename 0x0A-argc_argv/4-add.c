#include "holberton.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - start of program
 * @argc: count of arguments
 * @argv: arguments passed
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 1;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (_natint(argv[i]) == 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
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
