#ifndef VARIADIC
#define VARIADIC
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct form - new struct
 * @s: char string
 * @p: void func pointer
 *
 */
typedef struct form
{
	char *s;
	void (*p)();
} form;

void print_all(const char * const format, ...);
void print_s(va_list list);
void print_f(va_list list);
void print_i(va_list list);
void print_c(va_list list);

#endif
