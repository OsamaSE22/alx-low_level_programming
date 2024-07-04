#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	i =0;
	while (s[i]==accept[i] || s[i] != ',')
	{
		i++;
	}
	return i;
}
