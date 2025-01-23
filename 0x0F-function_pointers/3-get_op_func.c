#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	  op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	int i;

	i = 0;
	while(i < 5)
	{
		if(strcmp(ops[i].op, s) == 0)
		{
			return ops[i].f;
		}
		if (strcmp(ops[i].op, s) != 0)
		{
			i++;
		}
	}
	printf("Error\n");
	exit(99);

}
