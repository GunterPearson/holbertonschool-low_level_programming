#include "holberton.h"

/**
 * *_strncpy - start of function
 * @dest: where we are copying src too
 * @src: what we are given
 * @n: how much of src gets copied to dest
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w, a, c;
	char *s = dest;

	for (w = 0; src[w] != '\0' && w < n; w++)
	{
		dest[w] = src[w];
	}
	for (a = 0; s[a] != '\0'; a++)
		;
	for (c = w; s[c] != '\0' && c <= a && src[w] > '\n'; c++)
	{
		dest[c] = s[c];
	}
	dest[c] = '\0';
	return (dest);

}
