#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - traverse the nodes in the
 * linked list.
 * @h: the pointer pointing the first node.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *ptr;

	i = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);

}
