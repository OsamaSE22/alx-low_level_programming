#include <stddef.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i,k;

	if (size <= 0)
		k =-1;
	for (i = 0; i < size; i++)
	{
		if (array == NULL)
		{
			k = -1;
		}
		else
		{
			if (cmp(array[i]) != 0)
			{
				k = i;
				break;
			}
		}
	if(cmp(array[i]) == 0)
		k = -1;
	}
	return k;
}
