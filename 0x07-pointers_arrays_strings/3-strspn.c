#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	char *p, *a;
	unsigned int count = 0;

	for(p = s; *p != '\0'; p++)
	{
		for(a = accept; *a != '\0'; a++)
		{
			if(*p == *a)
			{
				break;
			}
		}
		if(*a == '\0')
		{
			return count;
		}
		count++;
	}
	return count;
}
