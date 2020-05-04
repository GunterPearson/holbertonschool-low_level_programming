#include "lists.h"

/**
 * get_dnodeint_at_index - pulls out node at given index
 * @head: head of linked list
 * @index: the index wanted
 *
 * Return: list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
