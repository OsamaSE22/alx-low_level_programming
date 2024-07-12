#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int sum_main_diag = 0;
	int sum_sec_diag = 0;

	for(i = 0; i <size; i++)
	{
		sum_main_diag += a[i*size+i];
		sum_sec_diag += a[i*size +(size -1 -i)];
	}
	printf("%d, %d\n", sum_main_diag, sum_sec_diag);
}
