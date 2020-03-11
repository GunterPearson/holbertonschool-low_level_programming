#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - start of funtion
 * @name: string name given
 * @f: pointer to funtion
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
