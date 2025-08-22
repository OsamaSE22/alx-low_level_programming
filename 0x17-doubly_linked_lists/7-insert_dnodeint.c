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
	unsigned int i;
	dlistint_t *curr;
	dlistint_t *new_node;
	dlistint_t *jump;
	dlistint_t *at_end;
	unsigned int count;
	dlistint_t *ptcount;

	at_end = *h;
	ptcount = *h;
	count = 0;
	curr = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	while (ptcount != NULL)
	{
		ptcount = ptcount->next;
		count++;
	}


	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (*h);
	}

	if (idx == count)
	{
		while (at_end->next != NULL)
		{
			at_end = at_end->next;
		}
		at_end->next = new_node;
		at_end->next->prev = at_end;
		at_end->next->next = NULL;
		return (*h);
	}

	for (i = 0; curr != NULL && i < idx - 1; i++)
	{
		curr = curr->next;
	}
	jump = curr->next;
	curr->next = new_node;
	curr->next->next = jump;
	curr->next->next->prev = new_node;
	curr->next->prev = curr;


	return (*h);


}
