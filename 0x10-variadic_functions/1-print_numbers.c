#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - start of function
 * @separator: seperates args
 * @n: argument count
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (separator != NULL && i !=  n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
