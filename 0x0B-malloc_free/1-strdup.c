#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int t = 7;
	char* ptr;
	int i;
	ptr = malloc(t* sizeof(char));
	
	for(i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return ptr;
}
