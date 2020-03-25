#include "lists.h"
/**
 * reverse_listint - reverse linked list
 * @head: head of list
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *rev;

	if (*head == NULL)
		return (NULL);
	while (temp->next)
	{
		rev = temp->next;
		temp->next = rev->next;
		rev->next = *head;
		*head = rev;
	}
	return (*head);
}
