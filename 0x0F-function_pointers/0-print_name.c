#ifndef FPTR
#define FPTR
#include "function_pointers.h"
#include <stddef.h>
#endif

/**
 * print_name - Calls a function to print a name.
 * @name: Pointer to the name string to be printed.
 * @f: Function pointer that defines how the name will be printed.
 *
 * This function takes a name as input and a function pointer `f`.
 * It calls the function `f`, passing the name as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	f(name);
	}
}
