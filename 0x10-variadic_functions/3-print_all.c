#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - start of function
 * @format: format pointer
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *sep = "";
	unsigned int i, j;
	form check[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(check[j]).s)
			{
				printf("%s", sep);
				check[j].p(list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
 * print_c - start of function
 * @list: argument
 *
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_i - start of function
 * @list: argument
 *
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_f - start of function
 * @list: argument
 *
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_s - start of function
 * @list: argument
 *
 */
void print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
