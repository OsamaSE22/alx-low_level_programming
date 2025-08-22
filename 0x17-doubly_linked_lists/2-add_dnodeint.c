#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add a node at beg. in Doubly linked list
 * @head: the pointer pointing to the pointer that points to the head
 * @n: the value to be add in the new node
 *
 * Return: dlistint_t *pointer to the head!
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	if ((*head)->next != NULL)
	{
		(*head)->next->prev = new_node;
	}
	return (*head);
}
