#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - add new nodes in the linked list.
 * @head: this is the pointer pointing to the first node.
 * @str: this is the string add to the nodes in the linked list.
 *
 * Return: head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *current;
	size_t i;

	i = 0;
	temp = malloc(sizeof(list_t));
	temp->str = strdup(str);
	while (temp->str[i] != '\0')
	{
		i++;
	}
	temp->len = i;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}

	/*printf("[%d] %s\n", *head->len, *head->str);*/
	return (*head);
}
