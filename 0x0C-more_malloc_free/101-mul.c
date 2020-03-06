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
	int t, i, j, len1, len2, currentp, totallen, over;
	int *answer;

	if (argc != 3 || !(num(argv[1])) || !(num(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	totallen = len1 + len2;
	answer = malloc(sizeof(int *) * totallen);
	if (answer == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len2 - 1; i > -1; i--)
	{
		over = 0;
		for (j = len1 - 1; j > -1; j--)
		{
			currentp = (argv[2][i] - '0') * (argv[1][j] - '0');
			over = (currentp / 10);
			answer[(i + j) + 1] += (currentp % 10);
			if (answer[(i + j) + 1] > 9)
			{
				answer[i + j] += answer[(i + j) + 1] / 10;
				answer[(i + j) + 1] = answer[(i + j) + 1] % 10;
			}
			answer[(i + j)] += over;
		}
	}
	ifans(answer, totallen);
	return (0);
}
/**
 * ifans - start of funtion
 * @answer: string given
 * @t: represents total len
 *
 * Return: void
 */
void ifans(int *answer, int t)
{
	int i;

	if (answer[0] == 0)
		i = 1;
	else
		i = 0;
	for (i; i < t; i++)
		printf("%d", answer[i]);
	printf("\n");
	free(answer);
}
/**
 * num - start of function
 * @num: string given to check
 *
 * Return: int
 */
int num(char *num)
{
	int i;

	for (i = 0; num[i]; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}


/**
 * _strlen - start of funtion
 * @s: string being counted
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}
