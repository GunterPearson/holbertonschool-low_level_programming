#include "lists.h"
/**
 * print_listint_safe - start of print function
 * @head: head of list
 *
 * Return: int
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;
	const listint_t *temp;

	temp = head;
	if (temp == NULL)
		exit(98);
	while (temp)
	{
		printf("[%p] %i\n", (void *)temp, temp->n);
		i++;
		if (temp->next >= temp)
		{
			temp = temp->next;
			printf("-> [%p] %i\n", (void *)temp, temp->n);
			return (i);
		}
		temp = temp->next;
	}
	return (i);
}
