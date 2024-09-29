#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_number(char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings representing the arguments.
 *
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int i;

    /* If no arguments are passed, print 0 */
    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    /* Loop through each argument */
    for (i = 1; i < argc; i++)
    {
        /* Check if the argument contains only digits */
        if (!is_number(argv[i]))
        {
            printf("Error\n");
            return 1;
        }

        /* Convert the argument to an integer and add to sum */
        sum += atoi(argv[i]);
    }

    /* Print the result */
    printf("%d\n", sum);

    return 0;
}
