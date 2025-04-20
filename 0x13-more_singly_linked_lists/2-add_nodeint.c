#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - insert node in the begining.
 * @head: the address of the pointer.
 * @n: data to be added to the new node.
 *
 * Return: the head pointer.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
