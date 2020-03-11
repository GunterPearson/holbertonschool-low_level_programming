#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - start of program
 * @argc: argument count
 * @argv: contains arguments
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int (*ans)(int a, int b);
	char *oper;
	char comp;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oper = argv[2];
	comp = argv[2][0];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (comp != '+' && comp != '-' && comp != '*' && comp != '/'
	    && comp != '%' && argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (comp == '/' || comp == '%')
	{
		if (a == 0 || b == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	ans = get_op_func(oper);
	if (ans == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ans(a, b));
	return (0);
}
