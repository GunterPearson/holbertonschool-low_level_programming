#include "lists.h"

/**
 * print_dlistint - print double linked list
 * @head: contains list
 *
 * Return: int of amount
 */
size_t print_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	size_t x = 0;


	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		x++;
	}
	return (x);
}
