#include "lists.h"
/**
 * sum_listint - gets sum of entire list
 * @head: start of list
 *
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
