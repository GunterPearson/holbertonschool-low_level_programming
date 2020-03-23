#include "lists.h"
/**
 * add_nodeint_end - start of function
 * @head: head of list
 * @n: number to add to new
 *
 * Return: malloc node at end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (last == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = temp;
	return (temp);
}
