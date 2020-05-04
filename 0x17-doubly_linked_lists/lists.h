#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t dlistint_len(dlistint_t *head);

size_t print_dlistint(dlistint_t *head);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

void free_dlistint(dlistint_t *head);

#endif
