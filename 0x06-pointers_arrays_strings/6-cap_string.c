#include "holberton.h"

/**
 * *cap_string - start of function
 * @s: place holder of string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
		for (i = 0; s[i] != '\0'; i++)
		{
			switch (s[i])
			{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':

				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
