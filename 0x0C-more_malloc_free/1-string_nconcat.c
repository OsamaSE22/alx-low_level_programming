#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i,j;

	ptr = malloc(sizeof(char)*(strlen(s1)+n));

	for(i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	if(strlen(s2) == n)
	{
		for(j = 0; j != '\0'; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	else
	{
		for(j = 0; j <= n; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	ptr[i] = '\0';
	if(ptr == NULL)
		return NULL;
	return ptr;

}
