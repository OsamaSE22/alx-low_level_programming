#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int count;
/*	list_t *ptr;*/

	/*ptr = h;*/
	count = 0;
	while(h != NULL)
	{
		count++;

		if(h->str == NULL && h->next != NULL )
		{
			printf("[0] (nil)\n");
			printf("[%u] %s\n", h->next->len, h->next->str);
		}
		else if(h->str != NULL && h->next != NULL)
		{

		printf("[%u] %s\n", h->len, h->str);
		printf("[%u] %s\n", h->next->len, h->next->str);

		}
		else if(h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return count;
}
