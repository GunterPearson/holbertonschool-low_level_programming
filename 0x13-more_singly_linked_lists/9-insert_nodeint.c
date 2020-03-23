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
	unsigned int count = 1;

	if (new == NULL)
		return (NULL);
	while (count < idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
