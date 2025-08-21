#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - length of doubly linked list
 * @h: the pointer to the first node
 *
 * Return: size_t - number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr;
	int count;

	curr = h;
	count = 0;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}
