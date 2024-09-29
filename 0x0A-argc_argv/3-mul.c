#include <stdio.h>

/*
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if(argc > 1 && argc < 4)
	{
		char a = *argv[1];
		char b = *argv[2];
		int r = a*b;
		printf("%d\n",r);
		return (0);
	}
	else
	{
		printf("Error\n");
		return 1;
	}
}
