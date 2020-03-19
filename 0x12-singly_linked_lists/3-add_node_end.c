#include "lists.h"
/**
 * add_node_end - start of function
 * @head: Double pointer
 * @str: const str given to add
 * Return: node *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *last;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = _strcpy(str);
	node->len = _strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = node;
	return (node);
}

/**
 * _strlen - start of function
 * @str: string to coount
 *
 * Return: number of elements
 */
unsigned int _strlen(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - start of function
 * @str: const string given
 *
 * Return: copy of string
 */
char *_strcpy(const char *str)
{
	char *copy;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	i = _strlen(str);
	copy = malloc(i * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
