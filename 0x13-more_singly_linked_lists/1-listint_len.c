#include "lists.h"

/**
 * listint_len - start of funtcion
 * @h: head of list
 *
 * Return: size_t int
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
