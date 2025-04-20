#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - free the memory allocated by the head pointing
 * the entire linked list.
 * @head: the pointer pointing the first node.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	free(head);
}
