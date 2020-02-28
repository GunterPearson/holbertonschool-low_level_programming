#include "holberton.h"
#include <stdio.h>
/**
 * main - start of program
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
