#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - A simple calculator that performs operations based on user input.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program arguments.
 *
 * Return: 0 if successful, otherwise the appropriate error code.
 */
int main(int argc, char *argv[])
{
    int result;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    op_func = get_op_func(argv[2]);

    if (!op_func)
    {
        printf("Error\n");
        return (99);
    }

    if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
    {
        printf("Error\n");
        return (100);
    }

    result = op_func(atoi(argv[1]), atoi(argv[3]));
    printf("%d\n", result);

    return (0);
}

