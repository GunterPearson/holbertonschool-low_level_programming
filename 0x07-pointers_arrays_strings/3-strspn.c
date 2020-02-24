#include "holberton.h"

/**
 * _strspn - start of function
 * @s: string given
 * @accept: what we are comparing it too
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int n;

	i = 0;
	n = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (n);
}
