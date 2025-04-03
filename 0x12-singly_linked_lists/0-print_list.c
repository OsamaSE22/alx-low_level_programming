#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Description: Iterates through a linked list and prints each element's 
 * string and length. If the string is NULL, it prints "[0] (nil)". 
 * Returns the number of nodes in the list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	int count;
/*	list_t *ptr;*/

	/*ptr = h;*/
	count = 0;
	while (h != NULL)
	{
		count++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			printf("[%u] %s\n", h->len, h->str);
			count++;
		}
		else if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);

		}
		h = h->next;
	}
	return (count);
}
