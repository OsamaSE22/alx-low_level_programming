#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at specific index starting from 0.
 * @head: the pointer pointing to the first node.
 * @index: the node after n times of traversing
 *
 * Return: dlistint_t node at specific index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;

	curr = head;
	if (index == 0)
	{
		return (curr);
	}
	while (curr != NULL && index > 0)
	{
		curr = curr->next;
		index--;
	}
	return (curr);
}
