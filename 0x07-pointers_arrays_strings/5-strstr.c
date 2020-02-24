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
	while (*haystack++)
	{
		if (*haystack == *needle)
			return (needle);
	}
	return (0);
}
