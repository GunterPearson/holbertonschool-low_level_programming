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
	int i = 0;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (atoi(argv[i]) >= '0')
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
