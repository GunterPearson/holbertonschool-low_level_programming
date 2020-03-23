#include "lists.h"
/**
 * free_listint - start of function
 * @head: the head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
