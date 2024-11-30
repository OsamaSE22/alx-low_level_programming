#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i,k,j;
	
	for(i = 0; s1[i] != '\0'; i++);

	ptr = malloc(sizeof(char)*(i+n+1));
	

	if(s1 == NULL)
                {
                        ptr = "";
                }
	for(i = 0; s1[i] != '\0'; i++)
	{
		
		ptr[i] = s1[i];
		
	}
	for (k = 0; s2[k] != '\0'; k++);
	if(s2 == NULL)
                {
                        ptr = "";
                }
	else{
		if(k == n)
		{
			for(j = 0; s2[j] != '\0'; j++)
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
	}
	ptr[i] = '\0';
	if(ptr == NULL)
		return NULL;
	return ptr;

}
