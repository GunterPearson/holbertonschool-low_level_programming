#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - start of funtion
 * @s: operator
 *
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (*(ops[i]).f);
		i++;
	}
	return (0);
}
