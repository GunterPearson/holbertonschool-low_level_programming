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
		if (temp == NULL)
			exit(98);
		printf("[%p] %i\n", (void *)temp, temp->n);
		i++;
		if (temp->n == 0)
			break;
		temp = temp->next;
	}
	if (temp->next)
	{
		printf("-> [%p] 98\n", (void *)temp);
	}
	return (i);
}
