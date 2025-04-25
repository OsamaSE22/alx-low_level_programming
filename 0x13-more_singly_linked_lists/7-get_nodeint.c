#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the node.
 * @head: the pointer pointing to the head node.
 * @index: number at which in the function we print the node.
 *
 * Return: pointer that align with index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *ptr;

	counter = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = head;
		while (ptr != NULL && counter < index)
		{
			ptr = ptr->next;
			counter++;
		}
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			return (ptr);
		}
	}
}
