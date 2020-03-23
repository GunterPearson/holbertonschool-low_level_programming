#include "lists.h"
/**
 * pop_listint - moves head and returns its value
 * @head: head of list
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int ret;

	if (*head == NULL)
		return (0);
	ret = temp->n;
	*head = (*head)->next;
	free(temp);
	return (ret);
}
