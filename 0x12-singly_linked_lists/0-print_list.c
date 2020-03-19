#include "lists.h"

/**
 * print_list - print node given
 * @h: const pointer to list
 *
 * Return: unsigned int
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	list_t *temp = malloc(sizeof(list_t));

	temp->str = "(nil)";
	temp->len = 0;
	i = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	free(temp);
	return (i);
}
