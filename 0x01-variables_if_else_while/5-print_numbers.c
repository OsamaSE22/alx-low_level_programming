#include <stdio.h>

/*
 * this is the main function the entry point
 */
int main(void)
{
	int x = 0;

	while ((x / 10) != 1)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
