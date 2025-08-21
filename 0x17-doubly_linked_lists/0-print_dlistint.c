#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - traverse through dlist and print it.
 * @h: the head pointing to the first node.
 *
 * return: count - the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	const dlistint_t *curr;

	curr = h;
	count = 0;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		count++;
	}
	return (count);
}
