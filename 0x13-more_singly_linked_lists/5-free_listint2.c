#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - free the entire linked list.
 * @head: the address of pointer pointing to the linked list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *current;

	if (head == NULL)
		return;

	ptr = *head;
	while (ptr != NULL)
	{
		current = ptr;
		ptr = ptr->next;
		free(current);
	}
	free(ptr);
	*head = NULL;
}
