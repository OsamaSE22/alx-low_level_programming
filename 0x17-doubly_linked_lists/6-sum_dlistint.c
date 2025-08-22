#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum all data in the Doubly linkedlist
 * @head: the pointer pointing to the first node.
 *
 * Return: (int) sum - the sum of all data in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *curr;

	if (head == NULL)
	{
		return (0);
	}
	curr = head;
	sum = 0;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
