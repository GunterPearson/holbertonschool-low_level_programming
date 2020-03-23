#include "lists.h"

/**
 * print_listint - start of fucntion
 * @h: head of the list
 *
 * Return: unsigned int
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
