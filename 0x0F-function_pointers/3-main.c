#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc == 4)
	{
		x = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
