#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - insert node in the end.
 * @head: the address of the pointer pointing to the first node.
 * @n: data needed to be added.
 *
 * Return: ptr.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (ptr);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = ptr;
	}
	return (ptr);
}
