#include "lists.h"
/**
 * get_nodeint_at_index - start of function
 * @head: head of list
 * @index: what index we are returning
 *
 * Return: listint_t node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	return (temp);
}
