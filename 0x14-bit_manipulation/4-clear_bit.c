#include <stdio.h>
#include "main.h"

/**
 * clear_bit - unset a bit.
 * @n: the number to be changed.
 * @index: the index of the bit.
 *
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);

	return (1);
}
