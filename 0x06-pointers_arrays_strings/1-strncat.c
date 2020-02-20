#include "holberton.h"

/**
 * *_strncat - entry point
 * @dest: contains hello
 * @src: contains world
 * @n: how much of src we want to print
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int h, w;

	for (h = 0; dest[h] != '\0'; h++)
		;
	for (w = 0; src[w] != '\0' && w < n; w++, h++)
	{
		dest[h] = src[w];
	}
	return (dest);
}
