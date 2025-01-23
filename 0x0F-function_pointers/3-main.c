#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char * argv[])
{
	int x;

	if (argc == 4)
	{
		if(get_op_func(argv[2]))
		{
			x = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
			printf("%d\n",x );
		}		
	}
	return (0);
}
