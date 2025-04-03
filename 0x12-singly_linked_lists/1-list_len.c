#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return the number of nodes
 * @h: pointer to the head of the linked list
 *
 * Description: iterate through the linked list
 * and return the number of nodes
 * Return: the Number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
