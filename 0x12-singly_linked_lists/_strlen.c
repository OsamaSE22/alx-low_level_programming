#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

size_t _strlen(const char *str)
{
	size_t i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
