#include "search_algos.h"

/**
 * linear_search - search linear
 * @array: pointer to array
 * @size: size_t size of array
 * @value: value to search for
 *
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
		return (-1);
	while (x < size)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}
	return (-1);
}
