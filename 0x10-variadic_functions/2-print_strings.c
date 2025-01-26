#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for(i = 0; i < n; i++)
	{
		str = va_arg(args, char* );
		if (separator != NULL)
		{
			if (i + 1 != n)
			{
				printf("%s%s", str, separator);
			}
			else
			{
				printf("%s", str);
			}
		}
		else
		{
			return;
		}
	}
	printf("\n");
	va_end(args);
}
