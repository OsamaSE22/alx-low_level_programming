#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char c;
	int in;
	char *s;

	if(format == NULL)
		return;

	i = 0;
	va_start(args, format);
	while(format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c, ", c);
		}
		else if(format[i] == 'i')
		{
			in = va_arg(args, int);
			printf("%d, ", in);
		}
		else if(format[i] == 's')
		{
				s = va_arg(args, char *);
				printf("%s", s);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
