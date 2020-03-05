#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - start of program
 * @argc: argument count
 * @argv: contains arguments
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int i;
	char *checkone, *checktwo;
	int *first, *second, *total;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	first = malloc(sizeof(int) * stlen(argv[1]));
	if (first == NULL)
		exit(98);
	second = malloc(sizeof(int) * stlen(argv[2]));
	if (second == NULL)
		exit(98);
	*first = strtol(argv[1], &checkone, 10);
	*second = strtol(argv[2], &checktwo, 10);
	if (!*checkone && !*checktwo)
	{
		total = malloc(sizeof(int) * 100);
		if (total == NULL)
			exit(98);
		*total = *first * *second;
		printf("%i\n", *total);
		free(total);
		free(first);
		free(second);
	}
	else
	{
		printf("Error\n");
		free(first);
		free(second);
		exit(98);
	}
	return (0);
}

/**
 * stlen - start of funtion
 * @p: string being counted
 *
 * Return: int
 */
long long stlen(char *p)
{
	long long i;

	for (i = 0; p[i]; p++)
		;
	return (i);
}
