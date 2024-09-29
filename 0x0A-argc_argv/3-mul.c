#include <stdio.h>
#include <stdlib.h>
/*
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if(argc > 1 && argc < 4)
	{
		char a = atoi(argv[1]);
		char b = atoi(argv[2]);
		int r = a * b;
		printf("%d\n", r);
		return (0);
	}
	else
	{
		printf("Error\n");
		return 1;
	}
}
