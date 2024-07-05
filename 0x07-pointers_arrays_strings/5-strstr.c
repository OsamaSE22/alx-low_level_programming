#include <stdio.h>
#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	char *p;
	for (p = haystack; *p != '\0'; p++)
	{
		if (*p == *needle)
		{
			return p;
		}
	}
	return NULL;
}
