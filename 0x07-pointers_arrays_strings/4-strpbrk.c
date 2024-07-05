#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
	char *p, *a;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if(*p == *a)
			{
				return p;
			}
			else if(*p + 1 == '\0' && *p != *a)
			{
				return NULL;
			}
		}
	}
	return p;
}
