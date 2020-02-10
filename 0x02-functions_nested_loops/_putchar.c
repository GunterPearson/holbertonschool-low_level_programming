#include <unistd.h>

/**
 * _putchar - writes character 'c'
 * to standard output
 * Return: 0 (success)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
