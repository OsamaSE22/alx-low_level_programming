#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;
	int x,j;
	ptr = malloc(sizeof(int *) * height);
	
	if(ptr == NULL)
		return NULL;
	if(width == 0 || height == 0)
		return NULL;
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if(ptr[i] == NULL){
			for(j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return NULL;
		}
	}
	for (x = 0; x < height; x++)
	{
		for(j = 0; j < width; j++)
		{
			ptr[x][j] = 0;
		}
	}
	if(ptr == NULL)
		return NULL;
	
	return ptr;

	for (x = 0; x < height; x++)
        {
                free(ptr[x]);
        }


}
