#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes character 'c'
 * to standard output
 * Return: 0 (success)
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
