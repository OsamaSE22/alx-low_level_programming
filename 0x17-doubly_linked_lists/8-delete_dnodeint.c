#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *PtrCount;
	unsigned int count;
	dlistint_t *temp2;
	dlistint_t *temp;
	unsigned int i;

	count = 0;
	PtrCount = *head;

	while (PtrCount != NULL)
	{
		PtrCount = PtrCount->next;
		count++;
	}
	if (*head == NULL)
	{
		return (-1);
	}
	if (index > count)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (head == NULL || *head == NULL)
                {
                        return (-1);
                }

		else if ((*head)->next == NULL && *head != NULL)
                {
                        free(*head);
                        *head = NULL;
                        return (1);
                }
		else if ((*head)->next != NULL && *head != NULL)
		{
			temp = (*head)->next;
			free(temp->prev);
			*head = temp;
			(*head)->prev = NULL;
			return (1);
		}
	}
	else if (index == count && *head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp2 = temp->prev;
		temp2->next = NULL;
		free(temp);
		temp = NULL;

		return (1);
	}
	else if (index < count && *head != NULL)
	{
		temp = *head;
		for (i = 0; i != index && temp != NULL; i++)
		{
			temp = temp->next;
		}
		temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
		free(temp);
		temp = NULL;
		return (1);
	}
	return (-1);

}
