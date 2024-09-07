#include "main.h"

/**
 *  a function that prints a string
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
