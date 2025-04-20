#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - add new node in the begining.
 * @head: the pointer pointing to the first node.
 * @str: the new string that's needed to be added.
 *
 * Return: head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	size_t i;

	i = 0;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (ptr->str[i] != '\0')
	{
		i++;
	}
	ptr->len = i;
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
