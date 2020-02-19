#include "holberton.h"

/**
 * *_strcpy - entry point
 * @dest: place holder
 * @src: place holder
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';
	return (dest);
}
