#include "lists.h"
/**
 * free_list - free all malloc
 * @head: pointer to start of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
