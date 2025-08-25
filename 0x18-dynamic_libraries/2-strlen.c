#include "main.h"

/**
 * a function that returns the length of a string.
 */
int _strlen(char *s)
{
	int n = 0;
	
	while(*s != '\0')
	{
		n++;
		s++;	
	}
	return (n);
}
