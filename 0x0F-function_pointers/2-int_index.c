#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - iterate through the array and apply function
 * @array: the array pointer
 * @size: the size of the array
 * @cmp: the function included
 *
 * Return: -1 if false, something else otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
