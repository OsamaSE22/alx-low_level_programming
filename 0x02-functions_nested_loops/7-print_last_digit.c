#include "main.h"

/**
 * this is to return
 * the last digit in any number
 */
int print_last_digit(int x)
{
	int last_digit;
	char digit_char;

	if (x >= 0)
	{
		last_digit = x % 10;
		digit_char = '0' + last_digit;
		_putchar(digit_char);
		return (last_digit);
	}
	else
	{
		x = x * -1;
		last_digit = x % 10;
		digit_char = '0' + last_digit;
		_putchar(digit_char);
		return (last_digit);
	}
}
