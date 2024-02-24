#include <stdio.h>

/**
 * this is the main function the entry-point in the memory
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar('0' + x);
		x++;
	}
	return (0);
}
