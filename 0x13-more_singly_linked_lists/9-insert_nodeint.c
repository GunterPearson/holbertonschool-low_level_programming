#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given ind
 * @head: head of list
 * @idx: index to insert at
 * @n: number used to create new
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int before = 1;

	if (head == NULL)
		return (NULL);
	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while (before < idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		before++;
	}
	if (temp == NULL && idx != 0)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx != 0)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = temp;
		*head = new;
	}
	return (*head);
}
