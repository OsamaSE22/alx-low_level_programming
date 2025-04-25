#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum the data number in nodes.
 * @head: the pointer pointing to the first node.
 *
 * Return: the sum of all data in the list.
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = head;
		sum = 0;
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
		return (sum);
	}
}
