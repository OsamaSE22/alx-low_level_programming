#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print any arguemnt passed
 * @format: the format specifier of the argument or parameter
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char c;
	int in;
	float f;
	char *s;
	char *separator = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				in = va_arg(args, int);
				printf("%s%d", separator, in);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%s%f", separator, f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
