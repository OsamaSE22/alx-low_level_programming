#include "main.h" 
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int c;

	for(i = 0; i<=max; i++);

	ptr = malloc(i * sizeof(int));

        if(ptr == NULL)
                return NULL;

	if(min > max)
		return NULL;
	for(c = 0; c <= max; c++)
	{
		ptr[c] = c + min;
	}
	return ptr;
}
