#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School Students
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
