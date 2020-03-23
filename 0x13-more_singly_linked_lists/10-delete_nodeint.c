#include "lists.h"
/**
 * delete_nodeint_at_index - start of function
 * @head: head of list
 * @index: index to delete
 *
 * Return: int 1 for succes -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int f = 1;
	unsigned int s = 0;
	listint_t *erase = *head;
	listint_t *behind = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(erase);
		return (1);
	}
	while (f < index)
	{
		behind = behind->next;
		if (behind == NULL)
			return (-1);
		f++;
	}
	while (s < index)
	{
		erase = erase->next;
		if (erase == NULL)
			return (-1);
		s++;
	}
	behind->next = erase->next;
	free(erase);
	return (1);
}
