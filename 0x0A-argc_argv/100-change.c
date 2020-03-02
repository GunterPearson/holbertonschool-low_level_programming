#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of change program
 * @argc: argument count
 * @argv: actual arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int tot, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	tot = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (tot > 0)
		{
			for (i = 0; i < 4; i++)
			{
				if (tot >= cents[i])
				{
					count += tot / cents[i];
					tot = tot % cents[i];
				}
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
