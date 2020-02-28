#include "holberton.h"

/**
 * *_strcat - start of function
 * @dest: contains hello
 * @src: contains world!
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int h, w;

	for (h = 0; dest[h] != '\0'; h++)
		;
	for (w = 0; src[w] != '\0'; w++)
	{
		dest[h] = src[w];
		h++;
	}
	dest[h] = '\0';
	return (dest);
}
