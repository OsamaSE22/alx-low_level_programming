#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - get the number of nodes
 * @h: the pointer that points to the first node.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *ptr;

	ptr = h;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
