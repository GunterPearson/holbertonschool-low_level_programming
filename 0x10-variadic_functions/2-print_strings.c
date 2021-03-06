#include "variadic_functions.h"
/**
 * print_strings - start of function
 * @separator: string separator
 * @n: argument count
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *p;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char *);
		if (p == NULL)
		{
			printf("(nil)");
			break;
		}
		else
			printf("%s", p);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
