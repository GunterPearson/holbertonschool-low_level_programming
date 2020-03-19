#include "lists.h"
/**
 * add_node - start of function
 * @head: node array
 * @str: str to add
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	unsigned int j = _strlen(str);

	if (temp == NULL)
		return (NULL);
	temp->str = _strcpy(str);
	temp->len = j;
	temp->next = *head;
	*head = temp;
	return (temp);
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
