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
	/*new_node->n = n;*/

	if (*head == NULL)
	{
		*head = new_node;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}
	curr = *head;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	new_node->n = n;
	curr->next = new_node;
	curr->next->prev = curr;
	curr->next->next = NULL;
	return (*head);

}
