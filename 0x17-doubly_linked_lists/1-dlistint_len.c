#include "lists.h"

/**
 * dlistint_len - returns len of list
 * @head: start of list
 *
 * Return: len of list
 */
size_t dlistint_len(dlistint_t *head)
{
	size_t x = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		x++;
	}
	return (x);
}
