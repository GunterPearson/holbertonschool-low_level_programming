#include "holberton.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: const char
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = 0, j = 0, current = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	i -= 1;
	while (i >= 0)
	{
		current = b[i];
		if (current == '1')
		{
			sum += (1 << j);
			i--;
			j++;
		}
		else if (current == '0')
		{
			i--;
			j++;
		}
		else
			return (0);
	}
	return (sum);
}
