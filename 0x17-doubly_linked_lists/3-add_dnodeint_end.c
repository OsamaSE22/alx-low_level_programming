#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a Dlinkedlist
 * @head: the pointer pointing to the first node
 * @n: the value to be add in the new node
 *
 * Return: dlistint_t pointer to the structure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *curr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return new_node;
	}
	curr = *head;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	new_node->prev = curr;
	return (new_node);

}
