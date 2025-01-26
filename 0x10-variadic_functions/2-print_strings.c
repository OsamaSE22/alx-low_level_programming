#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print provided strings
 * @separator: separate the strings
 * @n: number of strings
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (separator != NULL)
		{
			if (i + 1 != n && str != NULL)
			{
				printf("%s%s", str, separator);
			}
			else if (str == NULL)
			{
				str = "(nil)";
				printf("%s", str);
			}
			else
			{
				printf("%s", str);
			}
		}
		else if (i <= n && separator == NULL)
		{
			printf("%s", str);
		}
	}
	printf("\n");
	va_end(args);
}
