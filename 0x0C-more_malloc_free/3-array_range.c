#include "main.h" 
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int c;

	i = max - min +1;

	if(min > max)
                return NULL;

	ptr = malloc(i * sizeof(int));

        if(ptr == NULL)
                return NULL;

	for(c = 0; c <= max; c++)
	{
		ptr[c] = c + min;
	}
	return ptr;
}
