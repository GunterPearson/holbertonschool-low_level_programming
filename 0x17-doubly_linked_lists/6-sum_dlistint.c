#include "lists.h"

/**
 * sum_dlistint - returns sum of all nodes
 * @head: head of linked list
 *
 * Return: int containing sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
