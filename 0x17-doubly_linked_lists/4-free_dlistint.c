#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free the linked list
 * @head: the pointer pointing to the first node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
