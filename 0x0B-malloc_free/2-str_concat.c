#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i,j;
	ptr = malloc((strlen(s1) + strlen(s2))* sizeof(char));
	for(i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for(j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return ptr;
}
