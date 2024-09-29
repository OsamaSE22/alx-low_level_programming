#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings representing the arguments.
 *
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    /* Check if exactly 2 arguments are provided (excluding program name) */
    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    /* Convert the arguments to integers using atoi */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Multiply the two integers */
    result = num1 * num2;

    /* Print the result followed by a new line */
    printf("%d\n", result);

    return 0;
}

