#include <stdio.h>
#include "main.h"

/**
 * set_bit - to set a bit to 1 in the index.
 * @n: the pointer that store the address of the value.
 * @index: the index.
 *
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int r;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	r = *n | (1 << index);
	*n = r;

	return (1);
}
