#include "holberton.h"

/**
 * *_strstr - start of function
 * @haystack: where we are searching at
 * @needle: what we are searching for
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i]; i++)
	{
		while (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				i -= j - 1;
				return (&haystack[i]);
			}
		}
	}
	return (0);
}
