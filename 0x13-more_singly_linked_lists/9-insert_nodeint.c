#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node.
 * @head: pointer to pointer to the head node.
 * @idx: the index of the node.
 * @n: the data that will be add.
 *
 * Return: new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *ptr;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{
		counter = 0;
		ptr = *head;
		while (ptr != NULL && counter < idx - 1)
		{
			ptr = ptr->next;
			counter++;
		}
		if (ptr == NULL)
		{
			free(newNode);
			return (NULL);
		}

		newNode->next = ptr->next;
		ptr->next = newNode;
		return (newNode);
	}
}
