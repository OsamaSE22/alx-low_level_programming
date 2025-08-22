#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node to specific index starting with 0.
 * @h: pointer that pointing to the first node.
 * @idx: the index at which to insert the node.
 * @n: the data to be added to the node.
 *
 * Return: (dlistint_t) return the new doubly linked list.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr;
	dlistint_t *new_node;
	dlistint_t *jump;

	curr = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		(*h)->next->prev = new_node;
		return (*h);
	}
	while (curr != NULL && idx > 1)
	{
		curr = curr->next;
		idx--;
	}
	jump = curr->next;
	curr->next = new_node;
	curr->next->next = jump;
	curr->next->prev = curr;

	return (*h);


}
