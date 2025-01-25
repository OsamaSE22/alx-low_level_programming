#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the numbers
 * @n: number of the args
 *
 * Return: the result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	int sum;

	sum = 0;
	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
