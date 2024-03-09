#include "main.h"

/**
 * this is to return
 * the last digit in any number
 */
int print_last_digit(int x)
{
	int last;

	last = x % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar (last + '0');
	return (last);
}
