#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if(nmemb == 0 || size == 0)
	{
		return NULL;
	}

	ptr = malloc(nmemb * size);
	if(ptr == NULL)
	{
		return NULL;
	}
	return ptr;
}
