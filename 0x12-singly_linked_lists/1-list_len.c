#include "lists.h"
/**
 * list_len - start of function
 * @h: the head of the node
 *
 * Return: unsigned int
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
