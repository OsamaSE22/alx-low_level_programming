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
	unsigned int count;
	dlistint_t *ptcount;

	ptcount = *h;
	count = 0;
	curr = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*new_node->n = n;*/

	while (ptcount != NULL)
	{
		ptcount = ptcount->next;
		count++;
	}

	if (idx > count)
	{
		free(new_node);
		return (NULL);
	}


	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}

	if (idx == count)
	{
		/*while (at_end->next != NULL)
		{
			at_end = at_end->next;
		}
		at_end->next = new_node;
		at_end->next->prev = at_end;
		at_end->next->next = NULL;*/
		/*add_dnodeint_end(h, n);*/
		return (add_dnodeint_end(h,n));
	}

	new_node->n = n;
	for (i = 0; curr != NULL && i < idx - 1; i++)
	{
		curr = curr->next;
	}
	new_node->next = curr->next;
	new_node->prev = curr;
	if (curr->next != NULL)
	{
		curr->next->prev = new_node;
	}
	curr->next = new_node;


	return (new_node);


}
