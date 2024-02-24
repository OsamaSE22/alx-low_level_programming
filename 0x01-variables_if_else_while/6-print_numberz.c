#include <stdio.h>

/**
 * this is the main function the entry-point in the memory
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		char a = '0' + x;

		putchar(a);
		x++;
	}
	return (0);
}
