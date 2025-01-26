#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - receive numbers to print
 * @separator: the string between numbers
 * @n: the number of args
 *
 * Return: print the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	if (separator == NULL)
	{
		return;
	}
	num = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i + 1 != n)
			{
				num = va_arg(args, int);
				if (separator != NULL && i < n-1)
				{
					printf("%d%s", num, separator);
				}
				else
				{
					printf("%d", num);
				}
			}
			else
			{
				num = va_arg(args, int);
				printf("%d", num);
			}
		}
	}
	printf("\n");
	va_end(args);
}
