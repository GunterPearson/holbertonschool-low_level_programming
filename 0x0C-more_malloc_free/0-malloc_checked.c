#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - start of function
 * @b: unsigned int being given
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
