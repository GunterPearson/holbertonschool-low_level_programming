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
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int before = 1;

	if (head == NULL)
	{
		free(new);
		return (NULL);
	}
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (before < idx)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		before++;
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
