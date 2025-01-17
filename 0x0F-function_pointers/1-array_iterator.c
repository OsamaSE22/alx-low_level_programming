#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate on the array and apply the function provided
 * provide the array, size and the function pointer pointing to the function.
 * @array: this is array of integers.
 * @size: this is the number of elements in the array
 * @action: this is the function pointer that points to the funciton
 *
 * Rerun: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL || action != NULL)
	{

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
