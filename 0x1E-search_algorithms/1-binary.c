#include "search_algos.h"
/**
 * binary_search - search binary
 * @array: array to search
 * @size: size of array
 * @value: the value to search for
 *
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m = 0, p = 0;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (p = l; p <= r; p++)
		{
			printf("%d", array[p]);
			if (p != r)
				printf(", ");
		}
		printf("\n");
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
