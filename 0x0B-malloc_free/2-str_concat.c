#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i,j,a,b;
	 if (s1 == NULL)
		 s1 = "";
	 if (s2 == NULL)
		 s2 = "";

	for(a = 0; s1[a] != '\0'; a++);
	for (b = 0; s2[b] != '\0'; b++);
	ptr = malloc((a + b + 1)* sizeof(char));
	for(i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for(j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}
