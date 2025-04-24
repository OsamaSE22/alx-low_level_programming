#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node.
 * @head: the pointer pointing to the first node.
 *
 * Return: the head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);

	ptr = *head;
	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (n);
}
