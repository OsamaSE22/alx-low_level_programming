#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to decimal.
 * @b: the string to be converted.
 *
 * Return: the number in decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;

	int slen = strlen(b);
	unsigned int total = 0;
	int decval = 1;

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			total += decval;
		}
		decval *= 2;
	}
	return (total);
}
