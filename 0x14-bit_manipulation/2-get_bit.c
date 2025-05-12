#include <stdio.h>
#include "main.h"

/**
 * get_bit - get the bit at specified index.
 * @n: the number in decimal.
 * @index: the index of bit in the binary form of the number.
 *
 * Return: the bit in the specified index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return -1;

	return ((n >> index) & 1);
}
