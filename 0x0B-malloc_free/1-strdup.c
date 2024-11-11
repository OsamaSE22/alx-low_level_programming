#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char* ptr2;
	int i;
	int i2;

	if(str == NULL)
	{
		return NULL;
	}
	
	for(i = 0; str[i] != '\0'; i++)
	{
		ptr2 = malloc((i+1) * sizeof(char));

		if (ptr2 == NULL)
		{
			return NULL;
		}
	}
	for (i2 = 0; str[i2] != '\0'; i2++)
	{
		ptr2[i2] = str[i2];
	}
	ptr2[i] = '\0';
	return ptr2;
}
