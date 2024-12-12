#include "main.h" 
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{

	int *ptr;
	int i;
	int c;

	if(min > max)
                return NULL;

	i = max - min + 1;

	ptr = malloc(i * sizeof(int));

        if(ptr == NULL)
                return NULL;

	for(c = 0; c <= max - min; c++)
	{
		ptr[c] = c + min;
	}
	return ptr;
}
